#include <stdio.h>

int main(){

        //declaring and intilizing varaible

        int a = 5;
        int b = 5;
        int c = 5;
        int d = 5;
        int e = 5;

        //main logic
        a = a += 5.0;

        //printing out put
        printf("value of m += 5.0 is : ");
        printf("%d\n", a);

        //main logic
        b = b *= 5.0;

        //printing out put
        printf("value of m *= 5.0 is : ");
        printf("%d\n", b);

        //main logic
        c = c /= 5.0;

        //printing out put
        printf("value of m /= 5.0 is : ");
        printf("%d\n", c);

        //main logic
        //it showing error when float value is given
        //d = d %= (int) 5.0;
        d = d %= 5;

        //printing out put
        printf("value of m%%= 5.0 is : ");
        printf("%d\n", d);

        //main logic
        e = e -= 5.0;

        //printing out put
        printf("value of m -= 5.0 is : " );
	printf("%d\n", e);

}	





/*
 * Out Put
 * -------------------------
 * value of m += 5.0 is : 10
   value of m *= 5.0 is : 25
   value of m /= 5.0 is : 1
   value of m%= 5.0 is : 0
   value of m -= 5.0 is : 0
*/


