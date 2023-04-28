//Programme to print Fabonacci numbers
#include <stdio.h>

int main()
{
    //Declaring The Variables
    int start_1 = 0, start_2 = 1, end, fibonacci;

    //Taking the input from user and intilalize it to variable end
    printf("Enter the number of values to be print :");
    scanf("%d", &end);

    //For printing 0 and 1 default on the screen
    printf("%d\n%d\n", start_1, start_2);

    //Main Logic
    for(int i = 3; i <= end; i++)
    {
        //For Adding sequence of previous two numbers
	fibonacci = start_1 + start_2;
	start_1 = start_2;
	start_2 = fibonacci;
	
	//For Printing the fibonacci numbers
	printf("%d\n", fibonacci);
    }
    return 0;
}





/*
 *        out put
 *-----------------------
 Enter the number of values to be print :10
     0
     1
     1
     2
     3
     5
     8
    13
    21
    34
*/

