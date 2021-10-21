#include "main.h"
/**
 * _puts_recursion - print string using recursion
 * @s: string to print
 * Return: nothing
 **/

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');
}
