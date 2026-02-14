#include <stdio.h>

int main() 
{
    int sum = 0;
    int i;

    // Loop from i = 1 to i = 5
    for (i = 1; i <= 5; i++) 
	{
        sum += i; // Add the current value of i to sum
    }

    printf("The sum of the first 5 numbers is: %d \n", sum);
    return 0;
}
