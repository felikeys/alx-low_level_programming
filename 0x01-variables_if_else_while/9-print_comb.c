#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 48)
		{
			putchar(44);
			putchar(32);
		}
		putchar(num);
	}
	putchar('\n');
	return (0);
}
