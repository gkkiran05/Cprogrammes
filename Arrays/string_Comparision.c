#include <stdio.h>
int main()
{
    //Declaration
    char str[20];
    char str1[20];
    int i;

    //Intialization of string
    printf("Enter The First String:");
    scanf("%s", str);
    printf("Enter The Second String:");
    scanf("%s", str1);

    for(i = 0; str[i] != '\0' ; i++)
    {
        if(str[i] != str1[i])
	{
	    printf("The Both Strings Are Not Same\n");
	    break;
        }

    }
    if(str[i] == '\0')
    {
        printf("Both The Strings Are Equal\n");
    }

    return 0;
}
    

/*
 *      out put 
 *--------------------
         Case - 1

 Enter The First String:Hello
 Enter The Second String:hello
 The Both Strings Are Not Same

         Case 2

 Enter The First String:Hello
 Enter The Second String:Hello
 The Both Strings Are Equal

	 */

