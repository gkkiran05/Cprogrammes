//bit clear using macros

#include <stdio.h>
#define BITCLEAR(num, pos) num = num & ~ (1 << pos);

void numToBit(int num)
{
    for(int i = 7; i >= 0; i--)
    {
        int res = (num >> i) & 1;
        printf("%d ", res);
    }
}

int main()
{
    int num, pos;
    printf("Enter The Number: ");
    scanf("%d", &num);
    printf("Enter The postion: ");
    scanf("%d", &pos);
    
    numToBit(num);
    
    //bit clear
    BITCLEAR(num, pos);
    
    printf("\nafter BITCLEAR :");
    printf("%d\n", num);
    numToBit(num);
    return 0;
}
    


/*
           out put
--------------------------
Enter The Number: 10
Enter The postion: 1
0 0 0 0 1 0 1 0
after BITCLEAR :8
0 0 0 0 1 0 0 0


*/
