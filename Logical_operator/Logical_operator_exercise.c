#include <stdio.h>

int main()
{
	//variable declaration
	int a = 10;
	int b = 0;
	int c = 20;
	int d = 5;
	int r;

	//Main Logic
	r = (a && b) ||(c || b) && (a || d);

	//printing out put
	printf("value of r is : %d\n", r);
	printf("\n");
	printf("Value of a is : %d\n", a);
	printf("value of b is : %d\n", b);
	printf("value of c is : %d\n", c);
	printf("value of d is : %d\n", d);

	return 0;
}




/*
 *       out put
 *  -------------------
 *  value of r is : 1

    Value of a is : 10
    value of b is : 0
    value of c is : 20
    value of d is : 5

 */

