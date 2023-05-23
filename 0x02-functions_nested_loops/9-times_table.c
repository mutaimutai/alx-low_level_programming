#include "main.h"
#include <stdio.h>
/**
 * times_table-prints 9 times table
 * return:0 if it is executed successfully
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d,  ", i * j);
		}
	}
}
