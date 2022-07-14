#include "main.h"
#include <string.h>

/**
* _strcat - This function uses putcahr to
* appends two strings
* @dest: An imput variable for the first string
* @src: AN input variable  for the secof string
* Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int l = 0, i;

	while (dest[l])
	{
		l++;
	}
	for (i = 0; src[i] ; i++)
	{
		dest[l] = src[i];
		l += 1;
	}
	dest[l] = '\0';
	return (dest);
}
