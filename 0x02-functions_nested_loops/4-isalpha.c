#include "main.h"
/**
* _isalpha - check Holberten
* @c: An input character
* Describtion: a function that uses _putchar
* to check alphabets
* Return: 1 if an alphabet or 0 if otherwise
*/
int _isalpha(int c)
{

	int bool = 0;
	char ch;
	char ab;
	
	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == c)
		{
			bool = 1;
		}
		ch++;
	}
	ab = 'A';
	while (ab <= 'Z')
	{
		if (ab == c)
		{
			bool = 1;
		}
		ab++;
	}

	return (bool);
}
