#include <stdio.h>
/**
 * main - This is the entry point of the program
 * Return:Returns 0 when the program compiles successfuly
 */

int main(void)
{
	char c, ch;

	c = 'a';
	ch = 'A';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
