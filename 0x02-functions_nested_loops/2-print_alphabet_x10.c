#include "main.h"

/**
 * print_alpabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int 10t;

	char al;

	for (10t = 0; 10t <= 9; 10t++)
	{
		for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
	}
}
