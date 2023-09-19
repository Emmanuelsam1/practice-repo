#include "main.h"

/**
 * swap_int - swap value of ineteger
 * @a: integer 1
 * @b: interger 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
