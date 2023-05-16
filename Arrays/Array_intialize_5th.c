#include <stdio.h>

int main()
{
    //Array Declaration
    int a[3] = {1, 2, 3, 4, 5,6};
    int size_of;

    //Size of array
    size_of = sizeof(a) / sizeof(a[0]);
    printf("Size of given Array a[] is %d\n", size_of);

    //Loop For Printing The Elements in array
    for(int i =0; i < size_of; i++)
    {
        printf("Value of a[%d] is %d\n",i, a[i]);
    }
    return 0;
}




/*
 *      out put
 *-------------------
 Array_intialize_5th.c:6:26: warning: excess elements in array initializer
    6 |     int a[3] = {1, 2, 3, 4, 5,6};
      |                          ^
Array_intialize_5th.c:6:26: note: (near initialization for ‘a’)
Array_intialize_5th.c:6:29: warning: excess elements in array initializer
    6 |     int a[3] = {1, 2, 3, 4, 5,6};
      |                             ^
Array_intialize_5th.c:6:29: note: (near initialization for ‘a’)
Array_intialize_5th.c:6:31: warning: excess elements in array initializer
    6 |     int a[3] = {1, 2, 3, 4, 5,6};
*/

