//Programme For Student Data
#include <stdio.h>
//structure
struct student
{
    char name[20];
    int roll;
    float per;
    long mobile;
    char college[30];
};

int main()
{
    //for Selecting The Number Of Students
    int n;
    printf("Enter The Number Of Students Data To Be Enter:");
    scanf("%d", &n);
    
    //Declaration structure variables
    struct student s[n];
    
    //For Taking The Input Form user
    for(int i = 0; i < n; i++)
    {
    printf("Enter The Student Name:");
    scanf("%s", s[i].name);
    
    printf("Enter The Student Roll Number:");
    scanf("%d", &s[i].roll);
    
    printf("Enter The Student Percentage:");
    scanf("%f", &s[i].per);
    
    printf("Enter The Student Mobile Number:");
    scanf("%ld", &s[i].mobile);
    
    printf("Name Of The college:");
    scanf("%s", s[i].college);
    printf("\n");
    }
    
    //for Printing The Output
    for(int i = 0; i < n; i++)
    {
    printf("Name Of The Student:%s\nStudent Roll:%d\nPercentage:%f\nMobile Number:%ld\nCollege Name:%s\n",
	    s[i].name, s[i].roll, s[i].per, s[i].mobile, s[i].college);

    printf("\n");
    }
    return 0;
    
}
    
        

/*
 *    out put
 * ---------------------
Enter The Number Of Students Data To Be Enter:1
Enter The Student Name:kiran
Enter The Student Roll Number:21
Enter The Student Percentage:88.00
Enter The Student Mobile Number:8125569677
Name Of The college:svpcet

Name Of The Student:kiran
Student Roll:21
Percentage:88.000000
Mobile Number:8125569677
College Name:svpcet

*/

