//INSERTION SORT
#include <stdio.h>
//20 10 40 20 5

int main()
{
    //Declaration
    int n,temp,j;
    printf("Enter Size Of array:");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Sorting algorithm
    for(int i = 1; i < n; i++)
    {
        temp = arr[i];
        for(j = i; (j > 0 && temp < arr[j - 1]);j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
    
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
------------------------
Enter Size Of array:5
Enter array elements
11 2 7 3 8
Sorted Array
2 3 7 8 11


*/
