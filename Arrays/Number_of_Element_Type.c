#include <stdio.h>
int main()
{
    char c[10];
    int digit = 0;
    int alphabet = 0;
    int special = 0;
    int size_of = sizeof(c)/sizeof(c[0]);
    
    printf("Enter The characters:\n");
    //Loop For Taking Values in array
    for(int i = 0; i < size_of; i++)
    {
        /*printf("Enter The c[%d] value\n", i);*/
        scanf(" %c", &c[i]);
        
    }
    
    for (int j = 0; j < size_of; j++)
    {
        if ((c[j] >= '0') && (c[j] <= '9'))
        {
            digit = digit + 1;
        }
        else if ((c[j] >= 'A') && (c[j] < 'Z') || (c[j] >= 'a' && c[j] <= 'z'))
        {
            alphabet = alphabet + 1;
        }
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
