#include <stdio.h>

int main() {
    int rows;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print the left half of the pattern
        if (i % 2 == 1) {
            printf("*");
        } else {
            printf("   ");
        }

        for (j = 2; j <= i; j++) {
            if (j % 2 == 0) {
                printf("     ");
            } else {
                printf("  ");
            }
        }

        // Print the spaces in between
        for (j = 1; j <= 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // Print the right half of the pattern
        for (j = i; j >= 2; j--) {
            if (j % 2 == 0) {
                printf("     ");
            } else {
                printf("  ");
            }
        }

        if (i % 2 == 1) {
            printf(" *\n");
        } else {
            printf("   \n");
        }
    }

    return 0;
}

