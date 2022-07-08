#include "main.h"

/**
* _isupper - prints uppercase
* description - a functin that uses _putchar
* to check alphabets
* @c: An input character
* Return: 1 if an uppercase and 0 if otherwise
*/

int _isupper(int c)
{

	char ch;
	int i = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			i = 1;
		}
	}
	return (i);
}
