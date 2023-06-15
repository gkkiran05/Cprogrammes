/*Write a program that defines a structure called "Employee" 
with members name (string), employee ID (integer), and salary (float).
Prompt the user to enter details for multiple employees
and store them in an array of structures. Display the information of all employees.*/

#include <stdio.h> 

struct Employee
{
    char Employee_name[20];
    int Employee_ID;
    float salary;
};

int main()
{
    //Declaration
    int n;
    printf("Enter Number Of Employees Details To Enter: ");
    scanf("%d", &n);
    struct Employee e[n];
    
    //Intializing The Data into the structure
    for(int i = 0; i < n; i++)
    {
        printf("Enter The Employee Name: ");
        scanf(" %[^\n]", e[i].Employee_name);
        printf("Enter The Employee ID: ");
        scanf("%d", &e[i].Employee_ID);
        printf("Enter The Salary: ");
        scanf("%f", &e[i].salary);
        printf("\n");
    }
    printf("\n");
    //printing The Total Employees data
    for(int i = 0; i < n; i++)
    {
        printf("Employee Name: %s\n", e[i].Employee_name);
        printf("Employee ID: %d\n", e[i].Employee_ID);
        printf("Employee salary: %.2f\n", e[i].salary);
        printf("\n");
    }
    printf("\n");
    return 0;
}

/*
 *      out put
 *-------------------
Enter Number Of Employees Details To Enter: 2
Enter The Employee Name: kiran kumar
Enter The Employee ID: 121
Enter The Salary: 12321

Enter The Employee Name: the martin
Enter The Employee ID: 112
Enter The Salary: 12321


Employee Name: kiran kumar
Employee ID: 121
Employee salary: 12321.00

Employee Name: the martin
Employee ID: 112
Employee salary: 12321.00

*/
