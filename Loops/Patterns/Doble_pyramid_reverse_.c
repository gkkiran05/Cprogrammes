#include <stdio.h>

int main() {
    int rows;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        // Print *
        for (j = 1; j <= rows - i + 1; j++) {
            printf("* ");
        }

        // Print spaces
        for (j = 1; j < rows - i + 1; j++) {
            printf("  ");
        }

        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        // Print *
        for (j = 1; j <= rows - i + 1; j++) {
            printf("* ");
        }

        // Print space
        for (j = 1; j < rows - i + 1; j++) {
            printf("  ");
        }

        printf("\n");
    }

    return 0;
}

/*  out put
 *Enter the number of rows: 5
* * * * *
  * * * *
    * * *
      * *
        *
      * *
    * * *
  * * * *
* * * * *

*/
