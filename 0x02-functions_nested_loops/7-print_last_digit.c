#include "main.h"

/**
 * print_last_digit - to print last digit
 * @n:the number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ldt = n % 10;

	if (ldt < 0)
		ldt *= 1;
	_putchar(ldt + '0');

	return (0);
}
