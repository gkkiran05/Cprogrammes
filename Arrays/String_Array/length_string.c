//Programme to Find length of the string
#include <stdio.h>
int main()
{
    //Declaration of Array
    char str[20];
    int count = 0;

    //Intilaization of array
    printf("Enter The Elements into array: ");
    scanf("%s", str);

    //Loop For Counting The Elemets
    for(int i = 0; str[i] != '\0'; i++)
    {
        count = count + 1;
    }

    //Printing length of array
    printf("The Length Of Given Array is : %d\n", count);

    return 0;
}




/*
 *    out put
 * -------------
 *  Enter The Elements into array: wre2
    The Length Of Given Array is : 4

*/
