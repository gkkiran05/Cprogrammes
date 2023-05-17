#include <stdio.h>
int main()
{
    //Declaration of varaible and pointer
    int n = 0x12345678;
    char *p;
    int value = 0x100;

    //Intialization of pointer
    p = (char *) & n;
   
    //Loop For Printing The Values Of Each Byte
    for (int i =0 ; i < 4; i++)
    {
	//Printing the value
        printf("value at 0x%x is %x\n", value, *p);
	//incrementing the pointer address
	p = p + 1;

	value = value + 1;
    }

    /*
    printf("%x\n", *p);

    p = p+1;

    printf("%x\n", *p);

    p = p+1;

    printf("%x\n", *p);

    p = p+1;

    printf("%x\n", *p);
    */

    return 0;

}




/*
 *     out put 
 * -----------------
 *  value at 0x100 is 78
    value at 0x101 is 56
    value at 0x102 is 34
    value at 0x103 is 12

 */


