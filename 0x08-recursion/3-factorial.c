#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n : int
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
