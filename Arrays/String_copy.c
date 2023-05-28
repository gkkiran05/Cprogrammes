#include <stdio.h>

int main()
{
    //Declaration
    char str[] = "hello";
    char str1[10];

    //Printing the str 
    printf("Str = %s\n", str);
    
    //Loop For Copying The String
    for (int i = 0; str[i] != '\0'; i++)
    {
         str1[i] = str[i];
    }
    //printing str1 copied string
    printf("str1 = %s\n", str1);

    return 0;
}




/*
 *   out put 
 *--------------
  Str = hello
  str1 = hello
*/


