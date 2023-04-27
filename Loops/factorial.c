//Programme for finding factorial of a number

#include <stdio.h>

int main()
{
    //Variable declaration

    int i;
    int num;
    unsigned long fact = 1;

    //Taking input from user and store the value in num variable

    printf("Enter The Value :");
    scanf("%d", &num);

    //Main Logic

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    //printing factorial of given number

    printf("Factorial of %d is %ld\n", num, fact);

    return 0;
}




/*
 *    out put
 *--------------
  Enter The Value :8
  Factorial of 8 is 40320
  */


