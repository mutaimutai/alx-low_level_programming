#include <stdio.h>
/**
 * main - Entry point of the program
 * Return:0 when successfull
 */

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
