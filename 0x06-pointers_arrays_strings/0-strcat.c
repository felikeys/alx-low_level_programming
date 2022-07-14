#include "main.h"

/**
* _strcat - This function uses putcahr to
* appends two strings
* @dest: An imput variable for the first string
* @src: AN input variable  for the secof string
* Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	len++;

	for (i = 0; *src != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
