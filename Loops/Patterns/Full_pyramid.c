//Programme For Printing pyramid Filling With Star

#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;

    //Taking input from user and store in num variable
    printf("Enter The Value :");
    scanf("%d", &num);

    /*Main Logic
     * Outer Loop For Rows*/
    for(int i = 1; i <= num; i++)
    {
	//First Inner Loop For Printing Spaces
        for(int j = num; j > i; j--)
	{
	    printf("  ");
	}
	//Second Inner Loop for Printing stars
	for(int k = 0; k < (i * 2) - 1; k++)
	{
	    printf(" *");
	}
	printf("\n");
    }
    return 0;
}




/*
 *    out put
 *------------------
 Enter The Value :5
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *

*/

