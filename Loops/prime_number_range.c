//Prime numbers in given range

#include <stdio.h>

int main()
{
    //Variable Declaration

    int start, end, count;

    //Intializing the value to the variable

    printf("Enter The Starting Value:");
    scanf("%d", &start);

    printf("Enter The Ending Value:");
    scanf("%d" , &end);


    for(int i =start ; i <= end; i++)

    {
        count = 0; 
        for(int j = 1; j <= i; j++)
	{
	    if(i % j == 0)
	    {
	        count += 1;
            }

        }
	if(count == 2)
	{
            printf("%d\n", i);
	}
       
	
    }
    return 0;
}    






/*
 *      out put
 *------------------
   Enter The Starting Value:1
   Enter The Ending Value:16
   2
   3
   5
   7
   11
   13
*/
