#include <stdio.h>
/**
 * main -entry point
 * Return:0 when successfull
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++) {
	for (j = i + 1; j < 10; j++) {
	putchar('0' + i);
	putchar('0' + j);
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return 0;
}
