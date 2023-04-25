//Display days in a week by using switch condition

#include <stdio.h>

int main()
{   
    //Declaring the variable

    int week_num;

    //Intializing the variable
    
    printf("Enter the value: ");
    scanf("%d", &week_num);

    //Main logic

    switch(week_num)
    {
        case(1):
		printf("SUNDAY\n");
		break;
	case(2):
		printf("MONDAY\n");
		break;
	case(3):
		printf("TUESDAY\n");
		break;
	case(4):
		printf("WEDNESDAY\n");
		break;
	case(5):
		printf("THURSDAY\n");
		break;
	case(6):
		printf("FRIDAY\n");
		break;
	case(7):
		printf("SATURDAY\n");
		break;
	default:
		printf("INVALID ENTRY\n Select number between 1 to 7\n");
    }
    return 0;
}





/*
 *        out put  
 *--------------------------
          case -1

    Enter the value: 0
    INVALID ENTRY
    Select number between 1 to 7

          case -2

    Enter the value: 1
    SUNDAY
*/

