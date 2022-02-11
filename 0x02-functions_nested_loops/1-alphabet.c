#include "main.h"
/**
 * print_alphabet - prints alphabet from a-z.
 * Return: Nothing.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
