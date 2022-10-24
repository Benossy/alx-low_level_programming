#include "main.h"

/**
 * swap_int - swap value in integers
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b);
{
	int constant = *a;
		*b = *a;
		*a = constant;
}
