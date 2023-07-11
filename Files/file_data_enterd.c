#include <stdio.h>

int main() {
    FILE* file = fopen("data.txt", "a");  // Open file in append mode

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char data[100];

    printf("Enter data: ");
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);

    fclose(file);

    printf("Data saved to file.\n");

    return 0;
}

