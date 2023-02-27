#include "main.h"

/**
 *puts_half- prints half of a string, followed by a new line.
 *
 * @str: string.
 */

void puts_half(char *str)
{
	int len = 0, i, m;

	while (str[len] != 0)
		len++;
	if ((len % 2) == 0)
		j = len / 2;
	else
		j = (len - 1) / 2;
	for (i = j; i < len; i++)
		_putchar (str[i]);
_putchar ('\n');
}
