#include <stdio.h>

unsigned char swapbits(unsigned char num) {
    unsigned char odd = 0b10101010;
    unsigned char even = 0b01010101;
    unsigned char oddbits = num & odd;
    unsigned char evenbits = num & even;
    oddbits >>= 1;
    evenbits <<= 1;

    return oddbits|evenbits;
}

void printBits(unsigned char num)
{
    for(int bit = 7; bit >= 0; --bit)
    {
        printf("%d", (num >>bit)&1);
    }
    printf("\n");
}


int main() {
    unsigned char temp;

    printf("Enter The Char: ");
    scanf("%hhu", &temp);
    
    printBits(temp);
    
    unsigned char result = swapbits(temp);

    printf("Without swap: %02X\n", temp);
    printf("Swapped: %02X\n", result);
    
    printBits(result);
    
    
    return 0;
}

