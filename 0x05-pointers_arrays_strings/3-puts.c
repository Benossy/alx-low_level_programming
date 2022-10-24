#include "main.h"

/**
 * _puts - write string followed by new line
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
