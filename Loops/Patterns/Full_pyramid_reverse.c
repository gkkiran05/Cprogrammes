//Programme To Print Reverse Pyramid

#include <stdio.h>

int main()
{
    //Varaible Declaration
    int num;

    //Taking input From user and store in num varaible
    printf("Enter The Value : ");
    scanf("%d", &num);
    
    //For Printing Rows
    for(int i = 1; i<= num; i++)
    {
        //For Printing Spaces
        for(int j = 1; j < i; j++)
        {
            printf("  ");
        }

        //For Printing stars
        for(int k = 1; k <= (num * 2 -(2 * i - 1)); k++)
        {
            printf(" *");
        }

        //For Printing new line after coloum
        printf("\n");
    }

    return 0;
}




/*
 *   out put 
 *---------------
 Enter The Value : 5
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*/

