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
	int x, y;
	for (x = 0; x <= 98; x++)
	{
		for (y = x+1; y <= 99; y++)
		{
		putchar('0' + (x / 10) );
		putchar('0' + (x % 10));
		putchar(' ');
		putchar('0' + (y / 10));
		putchar('0' + (y % 10));
		if (x == 98 && y == 99 )
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
