#include <stdio.h>
//Function Declaration
int Factorial(int);

int main()
{
    //Declaration
    int num;
    int fact;
    
    printf("Enter The Number: ");
    scanf("%d", &num);
    
    //function Call
    fact = Factorial(num);
    
    printf("Factorial of given %d is %d\n", num, fact);

    return 0;
}

//Defenition
int Factorial(int num)
{
    if(num >= 1)
    {
        return num * Factorial(num -1);
    }
    //Condition for terminating recursion
    else
    {
        return 1;
    }
}
   



/*
 *    out put
 *----------------
 Enter The Number: 10
 Factorial of given 10 is 3628800

 */


    
