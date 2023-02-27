#include "main.h"

/**
 * swap_int - swaps values of two integers.
 * @a: First value to swap
 * @b: Second value swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
