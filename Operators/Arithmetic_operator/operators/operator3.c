#include <stdio.h>

int main()
{
	//variable value intilization
	int a = 6;
	int b = 4;

	//main logic
	b = a * b / (a = b);
        
	//printing out put
	printf("%d\n", b);

	return 0;
}


/*out put
 * ------
 *  6
 *  */

