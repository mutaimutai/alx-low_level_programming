#include <stdio.h>
/**
 * main -entry point
 * Return:0 when successfull
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++) 
	{
	for (j = i + 1; j <= 9; j++) 
	{
	putchar(i + '0');
	putchar(j + '0');
	if (i != EOF && j != EOF)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return 0;
}
