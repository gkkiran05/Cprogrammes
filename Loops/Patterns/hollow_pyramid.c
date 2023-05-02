//Programme For printing hollow pyramid by filling with stars

#include <stdio.h>

int main()
{
    //Variable Declaration
    int num;

    //Taking input from user and store in num variable
    printf("Enter The Number :");
    scanf("%d", &num);

    /*Main Logic
     * Outer Loop For Rows*/
    for(int i = 1; i <= num; i++)
    {
        //First Inner Loop For Printing Space
	for(int j = num; j >= i; j--)
	{
             printf("  ");
	}
	//Second Inner Loop For Printing Stars
	for(int k = 1; k <= (i * 2) - 1; k++)
	{
            //Condition for printing space or star
	    if ((k == 1) || (k == (i * 2) -1) || (i == num))
	    {
                 printf("* ");
	    }
	    else
	    {
                 printf("  ");
	    }
	 }
	 printf("\n");
     }
}



/*
 *           out put
 *-------------------------------
 Enter The Number :10
                    *
                  *   *
                *       *
              *           *
            *               *
          *                   *
        *                       *
      *                           *
    *                               *
  * * * * * * * * * * * * * * * * * * *
*/

