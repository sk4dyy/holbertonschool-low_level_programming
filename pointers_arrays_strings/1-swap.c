#include "main.h"

/**
 * swap_int - swaps the values
 * @a: pointer to first value
 * @b: pointer to second value
 * Credit : oussema turki
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
