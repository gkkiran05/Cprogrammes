//Selection sort
#include <stdio.h>

int main()
{
    //declaration
    int n, temp, min;
    
    printf("Enter Array Size :");
    scanf("%d", &n);
    
    int arr[n];
    //Taking elements into array
    printf("Enter The array Elements\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //Selection sort algorithm
    for(int i = 0; i < n; i++)
    {
        min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    //printing sorted array   
    printf("Sorted array\n");
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
-----------------------
Enter The array Elements
9 1 5 2 6 3
Sorted array
1 2 3 5 6 9


*/
