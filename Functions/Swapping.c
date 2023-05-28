#include <stdio.h>

//User Defined Function For Swapping
void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
    //Printing Values After Swapping
    printf("First Value Is : %d\n", a);
    printf("Second Value Is : %d\n", b);

}

int main()
{
    //Declaration
    int a, b;

    //Intilization of Variables
    printf("Enter The First Value:");
    scanf("%d", &a);

    printf("Enter The Second Value:");
    scanf("%d", &b);
    
    //Function Call
    swap(a, b);

    return 0;

}



/*
 *    out put
 *-----------------
 Enter The First Value:2
 Enter The Second Value:33
 First Value Is : 33
 Second Value Is : 2


 */

