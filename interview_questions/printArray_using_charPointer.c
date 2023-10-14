//take a char pointer intialize a int array and print using that char pointer

#include <stdio.h>

int main() {
    //Declaration
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];

    //Taking input
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    char *ptr = (char *)arr;

    //Printing the array
    printf("Array elements using char pointer: ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", *(int *)ptr + i);
    }
    return 0;
}

/*
           out put
----------------------------
Enter the array size: 5
Enter the array elements: 1 2 3 4 5
Array elements using char pointer: 1 2 3 4 5

*/
