//Printing Even numbers in given range

#include <stdio.h>

int main()
{
    //Declaring the variable

    int start, end;

    //Taking the input from user
    //Starting and ending values
    
    printf("Enter The Starting Value:");
    scanf("%d", &start);

    printf("Enter The Ending Value:");
    scanf("%d", &end);

    //Main Logic

    for(int i = start; i <= end; i++)
    {  
	//Condition for check whether the given number even or not
	
        if(i % 2 == 0)
	{
	    printf("%d\n", i);
	    i++;
	}
    }
    return 0;
}




/*
 *      out put
 *-------------------
 Enter The Starting Value:2
 Enter The Ending Value:10
     2
     4
     6
     8
    10
*/
