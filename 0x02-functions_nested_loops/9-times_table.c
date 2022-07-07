#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{

	int a, i, e;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		_putchar(',');

		_putchar(' ');

		for (i = 1; i <= 9; i++)
		{
			e = (a * i);

			if ((e / 10) > 0)

			{
				_putchar((e / 10) + '0');

			}
			else
			{

				_putchar(' ');

			}
				_putchar((e % 10) + '0');


			if (a < 9)

			{

				_putchar(',');

	      			_putchar(' ');

			}

		}

		_putchar('\n');

	}


}
