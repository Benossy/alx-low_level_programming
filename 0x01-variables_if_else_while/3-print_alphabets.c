#include <stdio.h>
/**
 * main - print alpha in lower and uper case
 * Return: Always 0
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar('\n');
	return (0);
}
