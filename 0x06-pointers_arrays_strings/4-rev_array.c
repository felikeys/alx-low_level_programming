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
	int *p, i, aux, k;

	p = a;
	for (int i = 0; i < n; i++)
	{
		p++;
	}

	for (int k = 0; k < i / 2; i++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}