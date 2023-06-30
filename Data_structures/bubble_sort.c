//BUBBLE SORT
#include <stdio.h>

int main()
{
    //Declaration
    int n;
    int temp;
    printf("Enter Number of elements-->");
    scanf("%d", &n);
    
    int arr[n];
    
    //Taking input
    printf("Enter The Elements into Array\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Sorting algorithm
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                //Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    //Printing output
    printf("Sorted Array\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


/*
 *
       out put
--------------------
Enter Number of elements-->4
Enter The Elements into Array
11 9 1 4
Sorted Array
1 4 9 11


*/
