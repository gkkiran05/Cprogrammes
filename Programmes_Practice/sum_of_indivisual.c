//Programme For Sum Of Indivisual Numbers
#include <stdio.h>

int main()
{
    //Declaring The Variables
    int num;
    int temp,digit,sum = 0;

    //Intializing The Variables
    printf("Enter The Value:");
    scanf("%d", &num);

    //Main Logic
    temp = num;
    for(int i = num; i >= 10; i--)
    {   
	//For Finding the last digit
        digit = num % 10;
	//To Add Last Digits
	sum = sum + digit;
	//for removing the last digit
	num = num / 10;
    }
    printf("The indivisual digit sum of given %d is %d\n", temp, sum);
    
    return 0;
}



/*
 *    out put
 *----------------
 Enter The Value:234
 The indivisual digit sum of given 234 is 9


 */


