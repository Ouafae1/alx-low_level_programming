#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int a;
	long int b;
	long long int c;
	float d;

	printf("Size of a char: %lu byte(s)\n", sizeof(x));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a float: %lu byte(s)\n", sizeof(d));

	return (0);
}
