#include "main.h"
/**
 * print_numbers - print 0-9
 * Return: nothing
 **/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}
