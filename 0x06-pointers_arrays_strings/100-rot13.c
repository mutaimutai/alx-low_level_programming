#include "main.h"
/**
 * *rot13-a function pointer that encodes in rot13
 * @str:is the argument placed
 * Return:returns the resulting string
 */
char *rot13(char *);

char *rot13(char *str)
{
	int i;
	char res[50];

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			res[i] = (((str[i] - 'a') + 13) % 26 + 'a');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			res[i] = (((str[i] - 'A') + 13) % 26 + 'A');
		}
	}
	return (res);
}
