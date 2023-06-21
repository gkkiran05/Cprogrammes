//Dynamic memory Allocation For 3D Array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration
    int rows, coloum1, coloum2;
    int ***p;
    
    printf("Enter The Size Of rows:");
    scanf("%d", &rows);
    printf("enter The Size Of coloum:");
    scanf("%d", &coloum1);
    printf("Enter The Size Of coloum2:");
    scanf("%d", &coloum2);
    printf("\n");
    
    //Dynamic Memory Allocation
    p = (int ***)malloc(rows * sizeof(int ***));
    
    for(int i = 0; i < rows; i++)
    {
        p[i] = (int **)malloc(coloum1 * sizeof(int **));
        for(int j = 0; j < coloum1; j++)
        {
            p[i][j] = (int *)malloc(coloum2 * sizeof(int *));
        }
    }
    
    //Checking Whether The Memory Allocated Or not
    if(p != NULL)
    {
        printf("Memory Allocated Sucessfully\n");
        printf("\n");
    }
    
    //intilaizing The array
    printf("Enter The Array Elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < coloum1; j++)
        {
            for(int k = 0; k < coloum2; k++)
            {
                scanf("%d ", &p[i][j][k]);
            }
        }
    }
    
    //For Printing The Elements In The Array
    printf("The 3d Array Is:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < coloum1; j++)
        {
            for(int k = 0; k < coloum2; k++)
            {
                printf("%d ", p[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    
    //for free the Memory
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < coloum1; j++)
        {
            free(p[i][j]);
        }
        free(p[i]);
    }
    free(p);
    
    p = NULL;
    //checking pointer Has NULL or not
    if(p == NULL)
    {
        printf("Memory DeAllocated Succesfully\n");
    }
    return 0;
}
   



/*
 *
       out put
-----------------------
Enter The Size Of rows:3
enter The Size Of coloum:2
Enter The Size Of coloum2:2

Memory Allocated Sucessfully

Enter The Array Elements:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
The 3d Array Is:
1 2
3 4

5 1
2 3

4 5
1 2


*/
