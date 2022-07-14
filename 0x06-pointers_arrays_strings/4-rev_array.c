#include "main.h"

/**
* reverse_array - reverses the content of an array
*
* @a: An input character
* @n: An input character
*
*/

void reverse_array(int *a, int n)
{
	int b[n];

	for (int i = 0; i < n; i++)
	{
		b[n - 1 - i] = a[i];
	}

	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
}
