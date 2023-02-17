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
	int x, y = 0, k = 0;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1 ; y < 9; y++)
		{
			for (k = y + 1 ; k < 10; k++)
			{
			putchar('0' + x);
			putchar('0' + y);
			putchar('0' + k);
			if (x == 7 && y == 8 && k == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
