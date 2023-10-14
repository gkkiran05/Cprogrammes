//repalce duplicate elements with zeros in array 

#include <stdio.h>

int main()
{
    //declaration
    int n;
    printf("Enter The array size: ");
    scanf("%d", &n);
    
    int arr[n];
    
    //taking input
    printf("Enter The array Elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //logic
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                arr[j] = 0;
            }
        }
    }
    
    printf("Elements after repalcing: ");
    //printing the array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

/*
 *
 *       out put
-------------------------
Enter The array size: 6
Enter The array Elements: 1 2 2 3 3 4
Elements after repalcing: 1 2 0 3 0 4

*/
