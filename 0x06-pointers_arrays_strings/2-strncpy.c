#include "main.h"
#include <string.h>

/**
* _strncpy - This function copy a string into another string
* and uses mor of he n value
* @dest: the first parmeter
* @src: the second parameter
* @n: the third parameter
* Return: the dest string
*/

char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);
	return (dest);
}
