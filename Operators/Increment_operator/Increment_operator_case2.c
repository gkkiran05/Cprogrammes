//increment operator
// a++ post increment
// ++a pre increment

#include <stdio.h>

int main()
{
    //Declaring And Intializing Variables

    int a = 10;
    int b;

    //Main Logic

    b = a++ + ++a;

    //printing a and b value after the expression

    printf("The Value of a is : %d\n", a);
    printf("The Value of b is : %d\n", b);

    return 0;

}




/*
 *    out put
 *----------------

   The Value of a is : 12
   The Value of b is : 22

*/


