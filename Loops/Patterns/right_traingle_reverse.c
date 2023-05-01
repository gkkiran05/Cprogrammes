//Programme for Make a reverse right traingle pattern Filled With *

#include <stdio.h>

int main()
{
    //Declaring The variable
    int num;

    //Taking the input from user and store in num variable
    printf("Enter The Value:");
    scanf("%d", &num);

    //Main Logic
    //Outer loop for printing rows
    for(int i = num; i > 0; i--)
    {
        for(int j = i; j > 0; j--)
	{
		printf("* ");
	}
	printf("\n");
    }
    return 0;
}




/*
 *
 *         out put
 * ------------------------
 *  Enter The Value:5
* * * * *
* * * *
* * *
* *
*


*/

