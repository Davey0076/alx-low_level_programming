#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: first integer
 * @b: second integer
 * Description: a function that swaps values of two integer numbers
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
