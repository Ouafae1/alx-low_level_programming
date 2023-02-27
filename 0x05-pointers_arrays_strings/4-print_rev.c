#include "main.h"

/**
 *print_rev-  prints a string, in reverse, followed by a new line.
 *
 * @s: string.
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;
	for (i = len; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
