//move zeros to right side in an array
#include <stdio.h>

int main()
{
    int n;
    printf("enter the array size: ");
    scanf("%d", &n);
    
    int str[n];
    //taking input
    printf("enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
    }
    
    //logic
    int j = 0;
    for(int i = 1; i < n; i++)
    {
        if(str[i] == 0)
        {
            int temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            j++;
        }
    }
    
    //printing output
    printf("After done: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", str[i]);
    }
    
    return 0;
}

/*
   out put
   
enter the array size: 5
enter the array elements: 1 2 0 2 0
After done: 0 0 1 2 2

*/
