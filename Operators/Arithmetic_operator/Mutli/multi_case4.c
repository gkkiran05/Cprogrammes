//subtraction of two numbers

#include <stdio.h>

int main()
{
        //variable declaration
        int i4value1;
        int i4value2;
        int i4sub;

        //intializing value into variables
        printf("enter the first Value :");
        scanf("%d", &i4value1);
        printf("enter the second Value :");
        scanf("%d", &i4value2);

        //Main Logic
        i4sub = i4value1 * i4value2;

        //printing out put
        printf("The Multipication of %d And %d Is : %d\n" , i4value1, i4value2, i4sub);

	return 0;

}

/*
Out put
--------
enter the first number : 5
enter the second number : 5
The multiplication of 5 And 5 is : 25
*/


