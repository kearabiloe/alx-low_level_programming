#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp=*a;
	*a = *b;
	*b = tmp;
}
