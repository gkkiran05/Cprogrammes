// c program to print left half pyramid pattern of star
#include <stdio.h>

int main()
{
	//declaration
	int rows;
	printf("Enter The Number Of Rows:");
	scanf("%d", &rows);

	// first loop is for printing the rows
	for (int i = 0; i < rows; i++) {

		// loop for printing whitespaces
		for (int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}

		// loop for printing *
		for (int k = 0; k <= i; k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


/*
 *
 *     out put
 *-----------------
 Enter The Number Of Rows:10
                   *
                 * *
               * * *
             * * * *
           * * * * *
         * * * * * *
       * * * * * * *
     * * * * * * * *
   * * * * * * * * *
 * * * * * * * * * *
*/
