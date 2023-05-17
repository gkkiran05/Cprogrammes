//Programme For Printing Reverse Hollow Pyramid
#include <stdio.h>

int main()
{
    //Declaring The Variable
    int num;
    
    //Taking input from user and store in variable num
    printf("Enter number of rows: ");
    scanf("%d", &num);

   //Outer Loop For Rows
    for(int i = 1; i <= num; i++)
    {
       //Inner Loop For Printing Space 
        for(int j = 1; j < i; j++)
        {
            printf(" ");
        }

        //Loop For Printing Hollow pyramid
        for(int j = 1; j <= (num * 2 - (2 * i - 1)); j++)
        {
	    //condition For Printing * or space
            if(i == 1 || j == 1 || j == (num * 2 - (2 * i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
	//Printing new line after completing innner loops
        printf("\n");
    }

    return 0;
}




/*
 *   out put
 *----------------
 Enter number of rows: 5
*********
 *     *
  *   *
   * *
    *



*/

