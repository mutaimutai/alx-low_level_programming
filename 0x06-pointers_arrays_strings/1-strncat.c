#include "main.h"
/**
 *_strncat-concatenates two strings
 *@des:to string to be concatenated
 *@src:the string to be concatenated
 *@n:the size of src
 *Return:returns res after being concatenated with src
 */
char *_strncat(char *dest, char *src, int n)
{
	des_len = strlen(des);
	int i;

	for (i = 0;i < n && src[i] != '\0'; i++)
	{
		des[des_len + i] = src[i];
		des[des_len + i] = '\0';
	}
	return (res);
}
