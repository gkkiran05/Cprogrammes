//Calculator by using switch

#include <stdio.h>

int main()
{
    //Varaible declaration

    int num1;
    int num2;
    int output;
    int operant;

    //Varaible intilization

    printf("Enter the First value : ");
    scanf("%d", &num1);

    printf("Enter the second value : ");
    scanf("%d", &num2);

    //For Displaying The Operations To Be Done

    printf("For Addition select 1\n");
    printf("For Subtraction select 2\n ");
    printf("For Multiplication select 3\n");
    printf("For Division select 4\n");
    printf("For Modulo Division select 5\n");

    //For taking operant to the variable
    printf("Enter The operant to be perform : ");
    scanf("%d", &operant);

    //Main Logic

    switch (operant)
    {
        case(1):
		output = num1 + num2;
		printf("%d\n", output);
		break;
	case(2):
		output = num1 - num2;
		printf("%d\n", output);
		break;
	case(3):
		output = num1 * num2;
		printf("%d\n", output);
		break;
	case(4):
		output = num1 / num2;
		printf("%d\n", output);
		break;
	case(5):
		output = num1 % num2;
		printf("%d\n", output);
		break;
	default:
		printf("Enter The Valid Operant\n");
    }
    return 0;

}






/*
 *             out put
 *   ------------------------------
 *  Enter the First value : 32
    Enter the second value : 43

    For Addition select 1
    For Subtraction select 2
    For Multiplication select 3
    For Division select 4
    For Modulo Division select 5

    Enter The operant to be perform : 1

    75
*/

