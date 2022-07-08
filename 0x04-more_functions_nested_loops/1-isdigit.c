#include "main.h"

/**
* _isdigit - prints out digits
* Description - the function uses _putchar
* to check digis
* @c: An input character
* Return: 1 if digit and 0 if otherwise
*/


int _isdigit(int c)
{

	int n;
	int b = 0;

	for (n = 0; n <= 9; n++)
	{
		if (n == c)
		{
			b = 1;
		}
	}
	return (b);
}
