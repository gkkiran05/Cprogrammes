//Programme For Printing sqaure root of 1 to 9
#include <stdio.h>

int main()
{
    //Variable Declaration
    int square, num = 9;

    //Main Logic
    for(int i = 1; i <= num; i++)
    {
        square = i * i;
	printf("Square of given %d is %d\n", i, square);
    }
    return 0;
}



/*
 *   out put 
 *--------------
 Square of given 1 is 1
 Square of given 2 is 4
 Square of given 3 is 9
 Square of given 4 is 16
 Square of given 5 is 25
 Square of given 6 is 36
 Square of given 7 is 49
 Square of given 8 is 64
 Square of given 9 is 81


 */
