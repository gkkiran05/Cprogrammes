//Programme for printing Right angle traingle pattern Filled with star

#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;

    //Taking input from user and store in num variable
    printf("Enter The value :");
    scanf("%d", &num);

    /*Main Logic
      outer loop for rows*/
    for(int i = 1; i <= num; i++)
    {
        //Inner Loop For colums
        for(int j = 1; j <= i; j++)
        {
                printf("* ");
        }
        //For new line after completing the row
        printf("\n");
    }
    //Outer Loop For rows
    for(int i = num; i > 0; i--)
    {
        //Inner Loop For colums
        for(int j = i; j > 0; j--)
        {
                printf("* ");
        }
        //For new line after completing the row
        printf("\n");
    }
    return 0;
}


/*
 *      out put
 *------------------
  Enter The value :5
  *
  * *
  * * *
  * * * *
  * * * * *
  * * * * *
  * * * *
  * * *
  * *
  *

*/

