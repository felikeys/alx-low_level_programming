#include "main.h"

/**
* _isupper - prints uppercase
* Description - the function checks if it is a uppercase or not
* @c: checks if the character is uppercase
*
* Return 1 if  uppercase and when  lowercase
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
