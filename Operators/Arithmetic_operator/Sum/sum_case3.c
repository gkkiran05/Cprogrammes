//Programme For Sum Of Two Numbers 

#include <stdio.h>

int main()
{

	//variable Declaration
	int i4value1;
	int i4value2;
	int i4sum;

	//initializing The Values into Variables
	printf("Enter The First Value:");
	scanf("%d", &i4value1);

	printf("Enter The Second Value:");
	scanf("%d", &i4value2);


	//Main Logic
	i4sum = i4value1 + i4value2;

	//printing Out Put
	printf("%d\n", i4sum);

} 

/*
Out put 
--------
enter the first number : 5
enter the second number : 5
10
*/
