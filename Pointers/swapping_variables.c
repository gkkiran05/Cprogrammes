//Swapping Two Variables Using Pointers
#include <stdio.h>

int main()
{
    //Varaibles And Pointer Declaration
    int num1 = 10, num2 = 20;
    int temp;
    int *p1, *p2;

    //Intialization variables to pointer
    p1 = &num1;
    p2 = &num2;

    //Printing values before swapping
    printf("Value Of num1 = %d before swapping\n", num1);
    printf("Value of num2 = %d before swapping\n", num2);

    //Logic For Swapping 
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    //Printing Values After swapping
    printf("Value Of num1 = %d After swapping\n", num1);
    printf("Value of num2 = %d After swapping\n", num2);

    return 0;
}



/*
 *    out put
 *-----------------
 Value Of Num1 = 10 before swapping
 Value of num2 = 20 before swapping
 Value Of Num1 = 20 After swapping
 Value of num2 = 10 After swapping



*/

