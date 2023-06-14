#include <stdio.h>

int main() {
    int rows;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print the left half of the pattern
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        // Print the spaces in between
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf("  ");
        }

        // Print the right half of the pattern
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}



/*
 *     out put
 *------------------
 Enter the number of rows: 7
*                         *
* *                     * *
* * *                 * * *
* * * *             * * * *
* * * * *         * * * * *
* * * * * *     * * * * * *
* * * * * * * * * * * * * *


*/

