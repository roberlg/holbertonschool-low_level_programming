#include "main.h"
/**
 * _isalpha - tests whether a character is from the alphabet.
 * @c: character to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
