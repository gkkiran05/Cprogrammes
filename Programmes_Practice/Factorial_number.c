//Programme For Finding factorial of a given number
#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;
    int fact = 1;

    //Taking num value from user
    printf("Enter The Value:");
    scanf("%d", &num);

    if(num < 1)
    {
        printf("Enter The number greater than zero\n");
    }
    else
    {
        //Main Logic
        for(int i = 1; i <= num; i++)
        { 
            fact = fact * i;
        }
    
        printf("Factorial of Given Number %d is %d\n", num, fact);
     }
    return 0;
}



/*
 *   out put 
 *-------------
 Enter The Value:10
 Factorial of Given Number 10 is 3628800
*/
