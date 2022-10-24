#include "main.h"
/**
 *swap_int - swaps values of two integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
