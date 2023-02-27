#include "main.h"
#include <stdio.h>

/**
 *rev_string- reverses a string.
 *
 * @s: string.
 */

void rev_string(char *s)
{
	int len = 0, i;
	char t;

	while (s[len] != 0)
		len++;
	for (i = len - 1; i >= len / 2; i--)
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
}
