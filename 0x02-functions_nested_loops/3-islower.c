#include "main.h"
/**
* islower - print lowercaase
*
* Description - the function checks if c is lowercase or not
*
* Return 1 if lowercase or 0 when uppercase
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
