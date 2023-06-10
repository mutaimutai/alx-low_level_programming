#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc:argument counter
 * @argv:argument vector
 * Return:0 when successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
