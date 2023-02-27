#include "main.h"

/**
 *print_array- prints n elements of an array of integers, followed by a new line.
 *
 * @a,n: int.
 */

void print_array(int *a, int n)
{
	int len = 0, i;

	while (a[len] != 0)
		len++;
	for (i = 0; i < n ; i++)
		_putchar (a[i]);
	_putchar ('\n');
}
