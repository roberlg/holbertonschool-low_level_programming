#include "main.h"

/**
 * puts_half - Prints out the first half of a string.
 *
 * @str: input string to print.
 */

void puts_half(char *str)
{
	int c, d;

	while (str[c] != '\0')
		i++;
	if (i % 2 == 0)
		d = c / 2;
	else
		d = (c + 1) / 2;
	while (d < c)
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
