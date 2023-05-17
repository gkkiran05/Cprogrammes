//Programme For Reversing The number 12345
#include <stdio.h>

int main()
{
    //Declaration of variable
    int digit, number = 0;
    int num = 12345;

    //Main Logic
    while(num > 0)
    { 
	//For Taking Last Digit into digit variable
        digit = num % 10;
	//For adding the reversed numbers
	number = number * 10 + digit;
	//For updating the num 
	num = num / 10;
    }
    //For Printing the reversed number
    printf("%d\n", number);
    return 0;
}





/*
 *    out put
 *---------------
 54321
 */

