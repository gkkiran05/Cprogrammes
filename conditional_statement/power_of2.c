//Finding Whether The Given Number Is Power of 2 or Not

#include <stdio.h>

int main()
{
    //Declaring variable

    int num;

    //Intilalizing the variable

    printf("Enter The Value :");
    scanf("%d", &num);

    //Main logic
    //condition to check whether the given number is power of 2 or not
    //If a number is a power of 2, then the bit’s of the previous number will be a complement of the number
    //Bit's of 8 = 1000
    //Bit's of 7 = 0111

    if ((num & (num - 1)) == 0)
    {
        printf("The Given Number %d Is Power of 2\n", num);
    }
    else
    {
	printf("The Given Number %d Is Not Power Of 2\n", num);
    }

    return 0;
}

