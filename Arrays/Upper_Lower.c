#include <stdio.h>
int main()
{
    //Declaration
    char str[30];

    //Intilaization of Array
    printf("Enter The String:");
    scanf("%s" ,str);

    //Loop For Converting Upper To Lower /Lower To Upper
    for(int i = 0; str[i] != '\0'; i++)
    {
	//Changing The Lower into upper
        if(str[i] >= 'a' && str[i] <= 'z')
	{
	    str[i] = str[i] - 32;
	}
	//Changing Upper Into Lower
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
	    str[i] = str[i] + 32;
	}
    }
    //Prinitng converted String
    printf("%s\n", str);

    return 0;
}





/*
 *    out put
 *------------------
 Enter The String:KiranKumar
 kIRANkUMAR


 */
