#include <stdio.h>
/**
 * main - entry point
 * Return:0 when successfull
 */

int main(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
