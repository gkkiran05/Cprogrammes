#include <stdio.h>

int main()
{
    //Array Declaration
    int a[50] = {1, 2, 3};
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
 *    out put
 *---------------
Size of given Array a[] is 50
Value of a[0] is 1
Value of a[1] is 2
Value of a[2] is 3
Value of a[3] is 0
Value of a[4] is 0
         |
	 |
	 |
Value of a[49] is 0

*/


