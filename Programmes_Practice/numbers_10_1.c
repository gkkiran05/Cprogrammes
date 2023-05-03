//Programme for printing 10 to 1 numbers

#include <stdio.h>

int main()
{
    //Variable Declaration and intialization
    int i = 10;
    int num = 1;

    //Main Logic
    for(; i >= num; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}


/*
 *   out put 
 *--------------
 10
 9
 8
 7
 6
 5
 4
 3
 2
 1
*/

