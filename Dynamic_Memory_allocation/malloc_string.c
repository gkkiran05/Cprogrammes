/*Write a program that dynamically allocates memory for a string.
Prompt the user to enter a sentence and store it in the allocated memory. 
Print the sentence to verify the successful allocation and deallocate the memory */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration
    char *ptr;
    ptr = (char *)malloc(1000 * sizeof(char));
    
    if(ptr == NULL)
    {
        return 0;
    }
    else
    {
        printf("Memory Allocated successful\n");
    }
    printf("\n");
    
    //For Taking The Input
    printf("Enter The sentence :\n");
    scanf(" %[^\n]", ptr);
    printf("\n");

    //For Printing The Out put
    printf("The Sentence You Entered Is :\n%s\n", ptr);

    //For free The Memory
    free(ptr);

    //Intialize the ptr NULL
    ptr = NULL;
    
    if(ptr == NULL)
    {
        printf("Memory Deallocated successfully\n");
    }
    
    
}
    
    
/*
 *     out put
 *----------------
Memory Allocated successful

Enter The sentence :
the pepole are very smart these days

The Sentence You Entered Is :
the pepole are very smart these days

Memory Deallocated successfully


*/
