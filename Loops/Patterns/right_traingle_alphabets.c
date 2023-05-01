//Programme for printing Right angle traingle pattern Filled with alphabets

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
                printf("%c ", i+64);
        }
        //For new line after completing the row
        printf("\n");
    }
    return 0;
}




/*
 *     Out put
 *------------------
 Enter The value :5
A
B B
C C C
D D D D
E E E E E
*/
