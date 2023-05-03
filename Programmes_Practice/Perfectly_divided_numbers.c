//Programme for Finding Numbers Perfectly divided by given number

#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;

    //Taking input from user and store in num variable
    printf("Enter The Value:");
    scanf("%d", &num);

    //Main Logic
    for(int i =1; i<= num; i++)
    {
        //Logic for checking whether the number is perfectly divided with given number
	if(num % i == 0)
	{
	    printf("%d\n", i);
	}

     }
     return 0;
}



/*
 *   out put 
 *-------------
  Enter The Value:10
  1
  2
  5
  10


  */

