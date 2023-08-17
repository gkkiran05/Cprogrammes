#include <stdio.h>

void setBit(void *ptr, int bitPosition)
{
    char *charptr = (char*)ptr;
    int byteIndex = bitPosition / 8;
    int bitOffset = bitPosition % 8;
    
    charptr[byteIndex] |= (1 << bitOffset);
}

void printBuffer(char *buffer, size_t bufferSize)
{
    printf("Buffer Content: ");
    for (size_t i = 0; i < bufferSize; i++)
    {
        printf("%02X ", (unsigned char)buffer[i]);
    }
    printf("\n");
}

int main()
{
    char buffer[] = {0, 1, 2, 3, 4};
    int bitPosition;
    
    printf("Enter the position: ");
    scanf("%d", &bitPosition);
    
    printf("Before setting:\n");
    printBuffer(buffer, sizeof(buffer));
    
    setBit(buffer, bitPosition);
    
    printf("After setting bit:\n");
    printBuffer(buffer, sizeof(buffer));
    
    return 0;
}



/*
 *
 *
            out put
------------------------------
Enter the position: 10
Before setting:
Buffer Content: 00 01 02 03 04
After setting bit:
Buffer Content: 00 05 02 03 04


*/
