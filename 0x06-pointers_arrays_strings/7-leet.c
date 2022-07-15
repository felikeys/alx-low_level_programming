#include "main.h"

/**
* leet - a leet function
* @x: parameter x
* Return: a string
*/
char *leet(char *)
{
	int a = 0; b = 0; l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', 'l'};

	while (x[a])
	{
		b = 0;
		while (b < l)
		{
			if (x[a] == tr[b] || x[a] - 32 == tr[b])
				x[a] = trw[b];
			b++;
		}
		a++;
	}
	return (x);
}
