#include "main.h"

/**
 * print_sign - print the sign
 * @n: the number of the sign
 * Return: 1 if number is greater than zero
 * o of number is zero
 * -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
			return (-1);
	}
}
