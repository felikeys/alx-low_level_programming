#include "main.h"
/**
* _islower - check Holberten
* @c: An input character
* Description - the function use the _putchar
* to print the lowercases
*Return: 1 if a found a lowercase and 0 if not
*/

int _islower(int c)
{

	char ch;

	int bool = 0;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == c)
		{
			bool = 1;
		}
		ch++;
	}

	return (bool);

}
