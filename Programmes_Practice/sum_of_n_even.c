//Programme for sum of first n even numbers
#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;
    int sum = 0;

    //Taking num value from user
    printf("Enter The Value:");
    scanf("%d", &num);

    //Main Logic
    for(int i = 1; i <= num; i++)
    {
        if(i % 2 == 0)
	{
            sum =  sum + i;
	}
    }
    printf("%d\n", sum); 
    
    return 0;
}




/*
 *  out put 
 *------------
  Enter The Value:10
  30
*/

