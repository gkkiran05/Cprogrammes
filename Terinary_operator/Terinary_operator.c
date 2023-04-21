//Terinary operator
#include <stdio.h>

int main()
{
    //Variable Declaration
    
    int num;

    //Varaible Intialization
    
    printf("Enter The Number : ");
    scanf("%d", &num);

    //Main Logic
    
    // By using terinary operator finding whether the number odd or even

    (num != 0) ? ((num % 2 == 0) ? printf("The Given Number %d is even number\n", num) : printf("The Given Number %d is odd number\n", num)) :
     printf("invalid input\n");

    return 0;

}





/*
 *      Out Put
 *---------------------
        case -1

   Enter The Number : 0
   invalid input

        case -2

   Enter The Number : 24
   The Given Number 24 is even number

        case -3

   Enter The Number : 21
   The Given Number 21 is odd number


*/

