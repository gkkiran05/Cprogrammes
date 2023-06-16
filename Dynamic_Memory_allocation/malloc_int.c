/*Write a program that dynamically allocates memory for an integer. 
Prompt the user to enter a value and store it in the allocated memory.
Print the value to verify the successful allocation and deallocate the memory. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration
    int num;
    printf("Enter Number Of Intergers To Be Taken:");
    scanf("%d", &num);
    int *ptr;

    //Dynamic Memory Allocation By malloc
    ptr = (int *) malloc(num * sizeof(int));

    //For Checking Memory Allocated Or Not
    if(ptr == NULL)
    {
        return 0;
    }
    else
    {
        printf("Memory Allocated successfully\n");
    }

    //For Taking The Values
    for(int i = 0; i < num; i++)
    {
        printf("Enter The Data:");
        scanf("%d", ptr+i);
    }
    printf("\n");

    //For Printing The Values
    for(int i = 0; i < num; i++)
    {
        printf("value at ptr %d is :%d\n", i+1, *(ptr+i));
    }
    printf("\n");

    //Free The Memory
    free(ptr);
    ptr = NULL;
    
    if(ptr == NULL)
    {
        printf("Deallocate the memory\n");
    }

}

/*
 *    out put
 *--------------------
Enter Number Of Intergers To Be Taken:5
Memory Allocated successfully
Enter The Data:1
Enter The Data:22
Enter The Data:33
Enter The Data:21
Enter The Data:24

value at ptr 1 is :1
value at ptr 2 is :22
value at ptr 3 is :33
value at ptr 4 is :21
value at ptr 5 is :24

Deallocate the memory

*/
