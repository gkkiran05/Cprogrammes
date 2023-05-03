//Programme For Reverse of a number
#include <stdio.h>

int main()
{
    //Declaring The Variables
    int num,digit;

    //Taking input from user
    printf("Enter The Value :");
    scanf("%d", &num);

    //Main Logic
    while(num > 0)
    {
        digit = num % 10;
	printf("%d", digit);
	num = num / 10;
    }
    printf("\n");
}




/*
 *   out put 
 *---------------
 Enter The Value :12345
 54321


 */
