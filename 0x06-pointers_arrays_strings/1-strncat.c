#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to append
 * @src: the string to be appended to dest
 * @n: the number of bytes from src
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
