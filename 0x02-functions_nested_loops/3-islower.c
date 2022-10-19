#include "main.h"

/**
 * _islower - check for lowercase
 * @c: the character
 * Return: 1 if there's lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
