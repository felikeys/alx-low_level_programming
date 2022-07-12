#include "main.h"

/**
* swap_int - This function swaps values to two integers
*
* @a: first input character
* @b: sencond input character
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
