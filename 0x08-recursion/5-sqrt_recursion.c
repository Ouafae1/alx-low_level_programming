#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return:square root of a number
 */
/**
 * rcr - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int rcr(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (rcr(n, i + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rcr(n, 0));
}
