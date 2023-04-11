//subtraction of two numbers

#include <stdio.h>

int main()
{
        //variable declaration
        int i4value1;
        int i4value2;
        int i4sub;

        //intializing value into variables
        printf("enter the first and second value:");
        scanf("%d %d" , &i4value1, &i4value2);

        //Main Logic
        i4sub = i4value1 * i4value2;

        //printing out put
        printf("%d\n" , i4sub);

}

/*
Out Put
-------
enter the first and second value : 5
5
25
*/

