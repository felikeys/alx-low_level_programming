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
	int l;
	int m = 0;

	for (int i = 0; i < (l / 2); i++)
	{
		m = a[i];
		a[i] = a[l - i - 1];
		a[l - i - 1] = m;
	}

}
