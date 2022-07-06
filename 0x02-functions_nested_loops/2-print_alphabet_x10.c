#include "main.h"
/**
* print_alphabet_x10 - print lowercases x10
*
*/

void print_alphabet_x10(void)
{

	char ch = 0, ab;

	while (ch < 10)
	{
		ab = 'a';
		while (ab <= 'z')
		{
			_putchar(ab);
			ab++;
		}
		_putchar('\n');
		ch++;
	}
}

