#include "main.h"
/**
 * _islower -Entry point
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
