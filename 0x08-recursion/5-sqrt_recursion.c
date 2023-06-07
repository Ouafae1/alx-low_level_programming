#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return:square root of a number
 */
int rcr(int n, int i)
{
        if ( i * i == n)
                return (i);
        if ( i * i > 0)
                return (-1);
        return (rcr (n, i + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rcr(n, 0));
}
