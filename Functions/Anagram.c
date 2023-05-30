#include <stdio.h>
#include <string.h>
//Function Declaration
void only_alphabets(char *str1, int n1);
void check_string(char *str1, char *str2);

int main()
{
    //Declaration;
    char str1[30];
    char str2[30];
    int n1, n2;

    scanf("%s" ,str1);
    scanf("%s", str2);

    n1 = strlen(str1);
    n2 = strlen(str2);

    //Function Calling
    only_alphabets(str1, n1);
    only_alphabets(str2, n2);

    //Printing strings after removing digits and special characters
    printf("%s\n", str1);
    printf("%s\n", str2);

    //Function calling
    check_string(str1, str2);
}

//Function Defenition
void only_alphabets(char *str1, int n1)
{
    for(int i = 0; i < n1; i++)
    {
        if((str1[i] >= 'A' && str1[i] <= 'Z') ||(str1[i] >= 'a' && str1[i] <= 'z'))
	{
	    continue;
	}
	else
	{
	    for(int j = i; j < n1; j++)
	    {
	        str1[j] = str1[j+1];
	    }
	    n1--;
	    i--;
	}
     }
    return;
}

//Function Declaration
void check_string(char *str1, char *str2)
{
    int temp = 0;
    if(strlen(str1) == strlen(str2))
    {
        for(int i = 0; str1[i] != '\0'; i++)
	{
	    for(int j = 0; str2[j] != '\0'; j++)
	    {
	        if((str1[i] == str2[j]) || (str1[i] == str2[j] + 32) || (str1[i] == str2[j] - 32))
		{
			temp = 1;
			break;
		}
		else
		{
		    temp = 0;
		}
	     }
	    if (temp == 0)
	    {
                break;
	    }
	}

        if(temp)
	{
	    printf("The Given Strings Are Anagrams\n");
	}
	else
	{
	    printf("The Given Strings Are Not Anagrams\n");
	}
   }
   else
   {
       printf("The Given String Is Not A Anagram");
   }
}




/*
 *    out put
 *---------------
 !2#Abc@
!A#B@C
Abc
ABC
The Given Strings Are Anagrams
*/


