#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the entry point of the program
 * Return:returns 0 when the program is executed successfully
 */

int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	c = n % 10;

	if (c > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d and is 0", n, c);
	}
	else if (c < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, c);
	}
	putchar('\n');

	return (0);
}
