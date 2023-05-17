//program on printing the bit of a given unsigned character
#include <stdio.h>

int main()
{
    //Declaring The Variable
    unsigned char cha;

    //Intializing The Character To The Variable
    printf("Enter The Character:");
    scanf("%hhu", &cha);

    //Main Logic
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (cha >> i) & 1);
    }
    printf("\n");
    return 0;
}





/*
 *    out put
 *---------------
 Enter The Character:s
 00100110

 */

