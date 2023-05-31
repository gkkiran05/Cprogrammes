#include <stdio.h>
int main()
{
    //Declaration
    char c[10];
    int digit = 0;
    int alphabet = 0;
    int special = 0;
    int size_of = sizeof(c)/sizeof(c[0]);
    
    //Taking the values into Array
    printf("Enter The characters:");
    scanf("%s", c);
    
    //Loop For Checking The Elemets in array
    for (int j = 0; j < size_of; j++)
    {
	//Checking Digits in Array
        if ((c[j] >= '0') && (c[j] <= '9'))
        {
            digit = digit + 1;
        }
	//Checking Alphabets in Array
        else if ((c[j] >= 'A') && (c[j] <= 'Z') || (c[j] >= 'a' && c[j] <= 'z'))
        {
            alphabet = alphabet + 1;
        }
	//Checking Special Character in Array
        else
        {
            special = special + 1;
        }
        
    }
    
    
    printf("Numbers of alphabets in array %d\n", alphabet);
    printf("Numbers of digit in array %d\n", digit);
    printf("Numbers of special in array %d\n", special);
   
   return 0; 
}



/*
 *    out put 
 *---------------
 Enter The characters:1qQ@#!23456
 Numbers of alphabets in array 2
 Numbers of digit in array 5
 Numbers of special in array 3


*/
