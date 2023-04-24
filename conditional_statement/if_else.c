//Programme for finding result of a student

#include <stdio.h>

int main()
{
    //Declaring the variable

    float student_percent;

    //Taking student percentage as input

    printf("Enter The Student Percentage : ");
    scanf("%f", &student_percent);

    //Main Logic

    //percentage <= 0 or > 100 then Invalid input
    //Percentage >  0 and < 35 then Fail
    //Percentage >= 35 and < 50 then Pass
    //Percentage >= 50 and < 75 then Average
    //Percentage >= 75 and <= 100 then Distinction

    if (student_percent <= 0 || student_percent > 100)
    {
        printf("Invalid Input\n");
    }
    else if (student_percent > 0 && student_percent < 35)
    {
        printf("Fail\n");
    }
    else if (student_percent >= 35 && student_percent < 50)
    {
        printf("Pass\n");
    }
    else if (student_percent >= 50 && student_percent < 75)
    {
	printf("Average\n");
    }
    else
    {
	printf("Distinction\n");
    }

    return 0;

}




/*
 *     Out Put
 *-----------------------
        case -1

  Enter The Student Percentage : 101
  Invalid Input

        case -2

  Enter The Student Percentage : 31
  Fail
   
        case -3

  Enter The Student Percentage : 45
  Pass

       case -4

  Enter The Student Percentage : 50
  Average

      case -5

  Enter The Student Percentage : 98
  Distinction


*/
