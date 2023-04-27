//Finding factorials in given range

#include <stdio.h>

int main()
{
    //Declaring the variables

    int start, end;
    long fact;

    //taking starting and ending values from user

    printf("Enter The Starting Value:");
    scanf("%d", &start);

    printf("Enter The Ending Value:");
    scanf("%d", &end);

    //Main Logic
    //outer loop

    for(int i = start; i <= end; i++)
    {
        fact = 1;

	//Inner loop

	for(int j = 1; j <= i; j++)
	{
            fact = fact * j;
	}
        //printing the factorial values
	
        printf("Factorial of %d is %ld \n", i, fact);
    }
    return 0;
}  





/*
 *         out put
 *------------------------
    Enter The Starting Value:5
    Enter The Ending Value:10

    Factorial of 5 is 120
    Factorial of 6 is 720
    Factorial of 7 is 5040
    Factorial of 8 is 40320
    Factorial of 9 is 362880
    Factorial of 10 is 3628800
*/

