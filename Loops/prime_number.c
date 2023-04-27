//Programme for finding whether the given number is prime number or not

#include <stdio.h>

int main()
{
    //Declaring the variable

    int num, i;
    int flag = 0;
    

    //Intializing the variable

    printf("Enter the number : ");
    scanf("%d", &num);

    //Main logic

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
	{
	    flag += 1;
	}
    }
    if(flag == 2)
    {
        printf("%d is prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}



/*
 *       out put
 *----------------------
         case -1
   Enter the number : 32
   32 is not a prime number
        
         case -2
   Enter the number : 2
   2 is prime number

*/

