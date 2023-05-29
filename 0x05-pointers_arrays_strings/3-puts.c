#include"main.h"
/**
 * _puts-function that prints out a string
 * str:argumen to be passed
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
