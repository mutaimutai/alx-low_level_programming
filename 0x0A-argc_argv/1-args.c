#include <stdio.h>
/**
 * main- entry point of the program
 * @argc:argument counter
 * @argv:argument vector
 * Return:0 when successful
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
