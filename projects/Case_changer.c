//case convertor
#include <stdio.h>
//function declarations
void UpperToLower(char *str);
void LowertoUpper(char *str);
void UpperEach(char *str);
void LowerEach(char *str);

int main()
{
    char str[100];
    int select, reattempt;
    //taking input from user
    printf("Enter the string: ");
    scanf(" %[^\n]", str);
    //displaying options
    printf("select 1 - for upper to lower --> ex: HELLO --> hello \n");
    printf("select 2 - for lower to upper --> ex: hello --> HELLO \n");
    printf("select 3 - for upper each word --> ex: hello world --> Hello World\n");
    printf("select 4 - for lower each --> ex: hELLO --> Hello \n");
    
start:

    scanf("%d", &select);
    
    switch(select)
    {
        case 1:
              UpperToLower(str);
              printf("%s\n", str);
              break;
        case 2:
              LowertoUpper(str);
              printf("%s\n", str);
              break;
        case 3:
              UpperEach(str);
              printf("%s\n", str);
              break;
        case 4:
             LowerEach(str);
              printf("%s\n", str);
              break;
        default:
              printf("invalid option\n");
              printf("Enter 1 for re attempt / any key for exit\n");
              scanf("%d", &reattempt);
              if(reattempt == 1)
              {
                  goto start;
              }
              else
              {
                  return 1;
              }
    }

return 0;

}
              
void UpperToLower(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return;
}
    
void LowertoUpper(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    return;
}

void UpperEach(char *str)
{
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
        {
            str[i + 1] -= 32;
        }
    }
    return;
}

void LowerEach(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i + 1] >= 'A' && str[i + 1] <= 'Z') {
            str[i + 1] += 32;
        }
    }
    return;
}
            
    
    
    
