#include "main.h"

/**
 * reverse_array - Reverse the content of an array
 * @a: The array
 * @n: the number of ellement
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
