#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Function Declaration
void processFile(const char* inFileName, const char* outFileName);
// Main Function
int main(int argc, char* argv[]) {
        //Condition to Check if whether we give proper arguments are not
	if (argc < 3) {
		printf("Usage: %s <inputFile> <outputFile>\n", argv[0]);
		return 1;
	}
	//store the input and output files
	char* inFileName = argv[1];
	char* outFileName = argv[2];
	//Function Call
	processFile(inFileName, outFileName);
	//priniting after complition of function
	printf("Output successfully generated\n");
	
	return 0;

}
//Function Defenition 
void processFile(const char* inFileName, const char* outFileName) {
        //opening the input file in read mode
	FILE* inputFile = fopen(inFileName, "r");
	if (inputFile == NULL) {
		printf("Error opening input file.\n");
		return;
	}

	//opening The output file (.i) file in write mode
	FILE* outputFile = fopen(outFileName, "w");
	if (outputFile == NULL) {
		fclose(inputFile);
		return;
	}
	//for printing the ouput file name at starting of output file
	fprintf(outputFile, "#%s\n", inFileName);
	//char array for read line by line
	char line[256];
	//char 3d array for storing the macro value and name
	char macroArray[100][2][256];
	int macroCount = 0;
	
	int currentCh;
	int Comment = 0;
	int insideConditionalBlock = 1;
	int skipLine = 0;
	//loop For read the input file
	while (fgets(line, sizeof(line), inputFile)) {
		int lineLength = strlen(line);
		char* code = line;
		int i = 0;
		//comment removing
		while (i < lineLength) {
			// To Store The index value of current character
			currentCh = code[i];
			//For Removing Single line comment
			if (!Comment && currentCh == '/' && i < lineLength - 1 && code[i + 1] == '/') {
				line[i] = '\n';
				line[i + 1] = '\0';
				break;
			}
			// multi line comment checking and removing
			if (!Comment && currentCh == '/' && i < lineLength - 1 && code[i + 1] == '*') {
				//make comment value 1 for replacing  the lines with space until we get * / 
				Comment = 1;
				line[i] = ' ';
				line[i + 1] = ' ';
			}
			//removing the multi line comment until * /
			if (Comment && currentCh == '*' && i < lineLength - 1 && code[i + 1] == '/') {
				//Make the value 0 for stop the removing
				Comment = 0;
				line[i] = ' ';
				line[i + 1] = ' ';
			}
			//for removing the lines between mutli line comments
			if (Comment) {
				line[i] = ' ';
			} 
			//macro values and names storing
			else {
				if (strncmp(code + i, "#define", 7) == 0) {
					char macroName[256];
					char macroValue[256];
					sscanf(code + i, "#define %s %s", macroName, macroValue);
					// To Store The Macro Names
					strcpy(macroArray[macroCount][0], macroName);
					// To store The Macro Values
					strcpy(macroArray[macroCount][1], macroValue);
					//updating the MacroCount For Next Macros
					macroCount++;
				} else if (!Comment && (strncmp(code + i, "#ifdef", 6) == 0 || strncmp(code + i, "#ifndef", 7) == 0)) {
					// Handle conditional compilation
					char macroName[256];
					sscanf(code + i, "#ifdef %s", macroName);
					
					// Check if the macro is defined
					int macroDefined = 0;
					for (int j = 0; j < macroCount; j++) {
						if (strcmp(macroArray[j][0], macroName) == 0) {
							macroDefined = 1;
							break;
						}
					}
					/* if #ifdef defined block  and macros are not define or
					 * if #ifndef block and the macros is defined then this block will execute */ 
					if ((strncmp(code + i, "#ifdef", 6) == 0 && !macroDefined) || 
						(strncmp(code + i, "#ifndef", 7) == 0 && macroDefined)) {
						// set this 0 if the above condition true
						insideConditionalBlock = 0;
						skipLine = 1;
					}
                                /* if #ifdef is false then it will check this 
				 * and if #endif is true then update insideConditionalBlock to 1 */

				} else if (strncmp(code + i, "#endif", 6) == 0) {
					insideConditionalBlock = 1;
					skipLine = 0;
                                // if it contains #else if above are false then this block executes
				} else if (strncmp(code + i, "#else", 5) == 0) {
					insideConditionalBlock = !insideConditionalBlock;
					skipLine = 0;
				} 
			}
			//updating the i value
			i++;
		}
		//checking conditional compilation and remove the macros and handle conditional compilation 
		if (insideConditionalBlock && !skipLine && strncmp(line, "#include", 8) != 0 && strncmp(line, "#define", 7) != 0 && strncmp(line, "#ifdef", 6) != 0 && strncmp(line, "#ifndef", 7) != 0 && strncmp(line, "#endif", 6) != 0 && strncmp(line, "#else", 5) != 0) {
			//printing The lines in output file
			fputs(line, outputFile);
		}
	}
	//Closing input and output file
	fclose(inputFile);
	fclose(outputFile);
}



/*                       input file
   --------------------------------------------------------

   #include <stdio.h>

// Macro definition
#define SQUARE(x) ((x) * (x))
#define DEBUG
int main() {
    int num = 5;

    // This is a comment
    printf("Number: %d\n", num);

    // Using the SQUARE macro
    printf("Square: %d\n", SQUARE(num));

    // Conditional compilation based on the macro definition
#ifdef DEBUG
    printf("Debug mode is enabled.\n");
#else
    printf("Debug mode is disabled.\n");
#endif

    return 0;
}






                   out put file
------------------------------------------------------------------
#Test.c


int main() {
    int num = 5;


    printf("Number: %d\n", num);


    printf("Square: %d\n", SQUARE(num));


    printf("Debug mode is enabled.\n");

    return 0;
}



*/



