#include <stdio.h>

void moveZerosAndOnes(int arr[], int size) {
    int nonZeroIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            int temp = arr[i];
            arr[i] = arr[nonZeroIndex];
            arr[nonZeroIndex] = temp;
            nonZeroIndex++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {0, 1, 1, 0, 1, 0, 0};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Original array: ");
    printArray(a, size);

    moveZerosAndOnes(a, size);

    printf("Modified array: ");
    printArray(a, size);

    return 0;
}


/*
 *
 *
          out put
------------------------------
Original array: 0 1 1 0 1 0 0
Modified array: 0 0 0 0 1 1 1


*/
