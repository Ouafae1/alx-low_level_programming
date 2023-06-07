#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s : string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l = l + 1;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
