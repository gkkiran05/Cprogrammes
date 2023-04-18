#include <stdio.h>

int main()
{
	//intilize and declare variables
	float a = 10.0;
	float b = 10.0;
	float c = 10.0;
	float d = 10.0;
	float e = 10.0;

	//main logic 
	a += 'c';

	//printing out put
	printf("value of f += 'c' is : ");
	printf("%f\n", a);

	//main logic
	b *= 'c';

	//printing output
	printf("value of f *= 'c' is : ");
	printf("%f\n", b);

	//main logic
	c /= 'c';

	//printing out put
	printf("value of f /= 'c' is : ");
	printf("%f\n", c);

	//main logic
	//unable to perform the operation
	// d %= 'c';

	//printing out put
	//printf("value of f%%= 'c' is : ");
	//printf("%f\n", d);

	//main logic
	e -= 'c';

	//printing out put
	printf("value of f -= 'c' is : ");
	printf("%f\n", e);

	return 0;
	
}


/*
 * Out Put:
 * ------------------------------------
 * value of f += 'c' is : 109.000000
   value of f *= 'c' is : 990.000000
   value of f /= 'c' is : 0.101010
   value of given f -= 'c' is : -89.000000
*/
