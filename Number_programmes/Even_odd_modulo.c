//Programme for finding the given number is even or odd by using modulo operator

#include <stdio.h>
int main()
{
    //Variable Declaration

   long  i4num;

    //Taking input from user

    printf("Enter the number : ");
    scanf("%ld", &i4num);

    //Main Logic
    
    if (i4num % 2 == 0)
    {
        //If the given number % 2 == 0 then it is even number
	
	printf("The Given number %ld is even number\n", i4num);
    }

    else 
    {
        //If the given number % 2 != 0 then it is odd number
	
	printf("The given number %ld is odd number\n", i4num);
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

