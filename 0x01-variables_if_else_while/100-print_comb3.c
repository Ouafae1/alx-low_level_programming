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
	int x,y=0;

	for (x = 0; x <= 8; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if (y > x)
				{
					putchar('0' + x);
					putchar('0' + y);
					if (x == 8 && y == 9)
						continue;
					putchar(',');
					putchar(' ');
				}	
		}
	}
	putchar('\n');
	return (0);
}
