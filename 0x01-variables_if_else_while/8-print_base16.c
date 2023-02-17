#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar('0' + x);
	}
	for (x = 'A'; x <= 'F'; x++)
	{
	int lower_x = tolower(x);

	putchar(lower_x);
	}
	putchar('\n');
	return (0);
}
