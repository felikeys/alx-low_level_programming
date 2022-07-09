#include "main.h"

/**
* print_numbers - print numbers
* Description - this function uses putchar
* to print numvers
* Return: 0 Always (Success)
*/


void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
