//solve a += b += c += d += 1 by using assignment operator
#include <stdio.h>
int main()
{
	//intializing varaibles
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e;


	// main logic
	e = a += b += c += d += 1;

	//printing the final out put
	printf("value of given equation:%d\n", e);

	return 0;
}

/*
 *     out put
 * ----------------
 *  value of given equation is : 101
 *  */
