#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * int sum_them_all - a function that returns the sum of all its parameters.
 *@n: number of arguments.
 *@...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0. else the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if n == 0
		return (0);
	else
	{
		va_list arg;
		va_start (arg, n);
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum = sum + va_arg(arg, int);
		}
		va_end(arg);
		return (sum);
	}
}
