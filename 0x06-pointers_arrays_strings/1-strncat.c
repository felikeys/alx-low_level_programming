#include "main.h"
#include <string.h>

/**
*_strncat - This function appends a string to another
* and uses the n bytes
* @dest: An input parameter
* @src: An input parameter
* @n: An iput parameter
* Return: A string
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}
