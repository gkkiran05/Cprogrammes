//2D Array By using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration
    int rows,coloums;
    int **p;
    
    printf("Enter Number Of Rows:");
    scanf("%d", &rows);
    printf("Enter Number Of Coloums:");
    scanf("%d", &coloums);
    
    //Dyanmic memory Allocation
    p = (int **)malloc(2 * sizeof(int *));
    
    //Allocation Dynamic Memory For Arrays Within The 2D Array
    for(int i = 0; i < coloums; i++)
    {
        p[i] = (int *)malloc(coloums * sizeof(int));
    }
    //For Checking Memory Allocated Or Not
    if(p != NULL)
    {
        printf("Memory Allocated Succesfully\n");
    }
    
    //Intialize The Values To The Array
    printf("Enter the values:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloums; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    
    //For Printing The Array
    printf("The 2D array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloums; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    
    //Free The Memory Allocation
    for (int i = 0; i < rows; i++)
    {
        free(p[i]);
    }
    free(p);
    
    p = NULL;
    //Checking If Memory Deallocated Or Not
    if(p == NULL)
    {
        printf("Memory Deallocated Succesfully\n");
    }
    return 0;
    
}
   
/*
 *
 *    out put 
------------------------
Enter Number Of Rows:3
Enter Number Of Coloums:3
Memory Allocated Succesfully
Enter the values:
1 2 3 4 5 6 7 8 9
The 2D array:
1 2 3
4 5 6
7 8 9
Memory Deallocated Succesfully


*/

