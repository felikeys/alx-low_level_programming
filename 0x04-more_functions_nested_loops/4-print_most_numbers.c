#include "main.h"

/**
*print_most_numbers - print numbers
*Description - THis funtion uses putchar
* to print most numbers
*
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
