 #include "main.h"

/**
 * _isupper - a function that checks fr uppercase character
 * @c: the checker to check
 * Return: 1 for uppercase characters, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}