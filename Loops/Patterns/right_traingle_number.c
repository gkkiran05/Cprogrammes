//Programme for printing Right angle traingle pattern Filled with Numbers

#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;

    //Taking input from user and store in num variable
    printf("Enter The value :");
    scanf("%d", &num);

    //Main Logic
    //outer loop for rows
    for(int i = 1; i <= num; i++)
    {
        //Inner Loop For colums
        for(int j = 1; j <= i; j++)
        {
                printf("%d ", i);
        }
        //For new line after completing the row
        printf("\n");
    }
    return 0;
}


/*
 *      Out Put
 *------------------
  Enter The value :5
  1
  2 2
  3 3 3
  4 4 4 4
  5 5 5 5 5
*/

