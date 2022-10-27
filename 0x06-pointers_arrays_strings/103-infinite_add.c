#include "main.h"

/**
 * add_strings - adds number to string
 * @n1: Thei string contains the first number
 * @n2: contains the second number
 * @r: the buffer
 * @size_r: the current index
 * Return: returns
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index;
	int n1_len = 0;
	int n2_len = 0;
	for (index = 0; *(n1 + index); index++)
		n1_len++;

	for (index = 0; *(n2 + index); index++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (size_r);
}
