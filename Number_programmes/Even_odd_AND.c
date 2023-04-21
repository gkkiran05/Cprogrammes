//Programme For Finding whether the given number is even or odd by using bit wise operator(AND)

#include <stdio.h>

int main()
{
    //variable declaration

    long i4num;

    //Taking input from user
    
    printf("Enter the number :");
    scanf("%ld", &i4num);

    //Main logic

    if ((i4num & 1) == 1)
    {
        //If LSB of number is 1 then Given number is odd
	
	printf("The Given Number %ld Is Odd Number\n", i4num);
    }

    else
    {
	//If LSB of number is 0 then Given Number is Even
	
        printf("The Given Number %ld Is Even Number\n", i4num);
    }

    return 0;
}





/*
 *      out put
 *----------------------
  case-1

  Enter the number :654321456
  The Given Number 654321456 Is Even Number

  case 2
  Enter the number :43
  The Given Number 43 Is Odd Number
*/

