//programme to understand working of a pointer
#include <stdio.h>

int main()
{
    //Declaration part
    int a = 10;
    int b = 20;
    int *p;

    printf("Value of a is %d and Address Stored in p is %p\n", a, p);
    /* out put before intializing value to pointer
     * Value of a is 10 and Address stored in Pointer p is (nil)*/

    p = &a;
    printf("The Value Of A is %d and The Value OF pointer p %d\n", a, *p);
    printf("Address of A is %p and Address Of Pointer P %p\n", &a, p);
    /* out put After Assigning The Address of a variable to pointer p
     * The Value Of A is 10 and The Value OF pointer p 10
       Address of A is 0x7ffe8d0b2708 and Address Of Pointer P 0x7ffe8d0b2708*/

    p = &b;
    printf("Assigned b variable address to pointer p\n");
    printf("Address of a is %p and Address of b is %p\n", &a, &b);
    printf("Address of pointer p is %p\n", p);
    printf("Value of a is %d and value of b is %d and value of p is %d\n", a, b, *p);
    /* out put
     * Assigned b variable address to pointer p
       Address of a is 0x7ffc67e12838 and Address of b is 0x7ffc67e1283c
       Address of pointer p is 0x7ffc67e1283c
       Value of a is 10 and value of b is 20 and value of p is 20
       */

    //changing the value of p
    *p = 25;
    printf("Address of b is %p and Address of pointer p is %p\n", &b, p);
    printf("value of b is %d and Value of pointer p is %d\n", b, *p);
    /* out put 
     * Address of b is 0x7ffe22ef5e6c and Address of pointer p is 0x7ffe22ef5e6c
       value of b is 25 and Value of pointer p is 25
       */

    return 0;
}
