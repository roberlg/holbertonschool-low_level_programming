#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @r: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = r * -1;
	_putchar((r % 10) + '0');
	_putchar((r % 10) - '0');
	return (r % 10);
}
