#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: string input
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	if (_strlen(str) % 2 != 0)
	{
		len += 1;
	}

	for (i = (_strlen(str) + len) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
