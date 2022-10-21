#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int num, multi, output;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			output = num * multi;

			if (output <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((output / 10) + 48);
			}

			_putchar((output % 10) + 48);
		}
		_putchar('\n');
	}
}
