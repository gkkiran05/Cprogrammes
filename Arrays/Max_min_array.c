//Programme To Find Minimum And MAximum element in Array
#include <stdio.h>
int main()
{
    //Declaration 
    int a[10];
    int max, min;
    int size_of;

    //Caluclate Size Of Array
    size_of = sizeof(a)/sizeof(a[10]);
    printf("Size Of Given Array Is : %d\n", size_of);
    
    printf("Enter The Elements Into array:");
    //Loop For Taking Elements to array
    for(int i = 0; i < size_of; i++)
    {
        scanf(" %d", &a[i]);
    }
    //Intilaize min and max Values with stating element of array
    min = max = a[0];

    //Loop For Checking max and min values in array
    for (int i = 0; i < size_of; i++)
    {
        if(min > a[i])
	{
	    min = a[i];
	}
	if(max < a[i])
	{
	    max = a[i];
	}
    }
    //Printing maximum and minimum values
    printf("Maximum Value of given array is : %d\n", max);
    printf("minimum Value of given array is : %d\n", min);

    return 0;
}



/*
 *    out put
 * -----------------
 * Size Of Given Array Is : 10
  Enter The Elements Into array:1 2 3 4 5 6 7 8 9 10 11
  Maximum Value of given array is : 10
  minimum Value of given array is : 1

*/
