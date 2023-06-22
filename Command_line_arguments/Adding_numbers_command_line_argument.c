//programme to convert string to interger and adding two intergers by using 'atoi' by creating my_atoi function
//command line arguments
#include <stdio.h>
#include <stdlib.h>

//Function For Converting String into interger
int my_atoi(char *str) {
    return atoi(str);
}

int main(int argc, char ** argv)
{
    //Declaration
    int num1;

    num1 = my_atoi(argv[1]) + my_atoi(argv[2]);
    printf("%d\n", num1);

    return 0;
}


/*
        out put
-------------------------
./Adding_numbers_command_line_argument.exe 3 4

7


*/
    
