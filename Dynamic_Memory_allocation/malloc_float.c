/*Write a program that dynamically allocates memory for an array of floating-point numbers.
Prompt the user to enter the size of the array and the values for each element. 
Calculate and print the average of the numbers. Finally, deallocate the memory.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Declaration
    float num;
    printf("Enter The Number Of Elements To Store:");
    scanf("%f", &num);
    float *ptr;
    
    ptr = (float *)malloc(num * sizeof(float));
    
    //Checking The Memory Allocated Or Not
    if(ptr == NULL)
    {
        return 0;
    }
    else
    {
        printf("Memory Allocated Sucessfully\n");
    }
    
    //Taking The Data
    for(int i = 0; i < num; i++)
    {
        printf("Enter The Data:");
        scanf("%f", ptr + i);
    }
    printf("\n");
    
    //For Printing The Values Stored
    for(int i = 0; i < num; i++)
    {
        printf("The Value at ptr %d is:%.2f\n", i + 1, *(ptr + i));
    }
    
    //Free The Memory
    free(ptr);
    
    //intilalizing The pointer To Null
    ptr = NULL;
    
    if(ptr == NULL)
    {
        printf("Memory Deallocated Sucessfully\n");
    
    }
}
    


/*
 *       out put
 * -------------------
Enter The Number Of Elements To Store:3
Memory Allocated Sucessfully
Enter The Data:21.963
Enter The Data:23
Enter The Data:249

The Value at ptr 1 is:21.96
The Value at ptr 2 is:23.00
The Value at ptr 3 is:249.00
Memory Deallocated Sucessfully


*/
