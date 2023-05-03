//Programme for finding numbers not divisible by 2,3,5

#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;

    //Taking Input From User And Store In num Variable
    printf("enter The value:");
    scanf("%d", &num);

    //Main Logic
    for(int i = 1; i <= num; i++)
    {
        //Logic For checking the number or not Divisible By 2,3,5
	if((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0))
	{
            printf("%d\n", i);
	}
    }
    return 0;
}



/*
 *   out put 
 *--------------
 enter The value:20
 1
 7
 11
 13
 17
 19


 */

