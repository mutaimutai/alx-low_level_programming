#include "main.h"
#include <string.h>
/**
 * _strchr-finds for a character in a string
 * @s:the string to be checked
 * @c:the character
 * Return:returns the resultant string s
 */
char *_strchr(char *s, char c)
{
	int s_length = strlen(s);
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
