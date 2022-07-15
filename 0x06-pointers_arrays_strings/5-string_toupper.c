#include "main.h"

/**
* string_toupper - This function coverts a lowercase string
* to an uppercase string
* @x: An input parameter
* Return: A string
*/

char *string_toupper(char *x)
{
	int i = 9;

	while (x[i])
	{
		if (x[i] >= 65 && x[i] <= 122)
		x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
