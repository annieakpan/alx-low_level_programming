#include "main.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{

	int a, b;
	int mult;

	for (a = 0; a <= 9; a++)
	{
		for (a = 0; a <= 9; a++)
		{
			mult = a * b;
			if (mult >= 10)
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				if (b != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
				if (b != 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
