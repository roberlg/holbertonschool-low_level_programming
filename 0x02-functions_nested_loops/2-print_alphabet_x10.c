#include "main.h"
/**
 * print alphabet x10- prints 10 times the aphabet, in lowercase
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = '0'; c < '10'; ++i)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}


	}
	_putchar('\n');
}
