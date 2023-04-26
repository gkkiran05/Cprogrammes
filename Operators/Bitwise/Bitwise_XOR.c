//Bit Wise Operator By Using XOR Operator
#include <stdio.h>
int main()
{
	//Declaring variables
	int a = 10;
	int b = 20;

	//printing a and b value before performing the XOR operation
	printf("value of a before operation is : %d\n", a);
	printf("value of b before operation is : %d\n", b);

	//Main Logic
	a ^= b ^= a ^= b;

	//printing out put after performing the XOR operation
	printf("value of a after XOR operation is : %d\n", a);
        printf("value of b afterXOR operation is : %d\n", b);



	return 0;
}


/*
 *      out put 
 *---------------------
  value of a before operation is : 10
  value of b before operation is : 20
  value of a after XOR operation is : 20
  value of b afterXOR operation is : 10
  */
