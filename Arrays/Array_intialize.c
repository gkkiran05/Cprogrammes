#include <stdio.h>

int main()
{
    //Array Declaration
    int a[5];
    int size_of;
    
    //Size of array
    size_of = sizeof(a) / sizeof(a[0]);
    printf("Size of given Array a[] is %d\n", size_of);

    //Normal method for printing Array elements
    /*printf("value of a[0] is %d\nvalue of a[1] is  %d\nvalue of a[2] is %d \nvalue of a[3] is%d\nvalue of a[4] is %d\n", a[0], a[1], a[2], a[3],      a[4]);
    */

    //Loop For Printing The Elements in array
    for(int i =0; i < size_of; i++)
    {
        printf("Value of a[%d] is %d\n",i, a[i]);
    }
    return 0;
}




/*
 *   out put
 *-----------------
Size of given Array a[] is 5
value of a[0] is 0
value of a[1] is  0
value of a[2] is -167354240
value of a[3] is21896
value of a[4] is -627970848

*/

