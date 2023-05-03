//Programme For sum of first and last Digit of a number

#include <stdio.h>

int main()
{
    //Declaring The Variables
    int num, last_digit, sum;
    int temp;
    //Intialization of variable
    printf("Enter The Number:");
    scanf("%d", &num);
    temp = num;

    //Logic For Finding last Digit
    last_digit = num % 10;

    //Main Logic for finding first digit
    while(num >= 10)
    {
        num = num / 10;
    }
    //Adding First And Last Digit
    sum = last_digit + num;
    printf("The Sum Of First And Last Digit Of %d is %d\n", temp, sum);

    return 0;
}



/*
 *    out put
 *---------------
  Enter The Number:123
  The Sum Of First And Last Digit Of 123 is 4

*/

