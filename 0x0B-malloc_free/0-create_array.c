#include "main.h"
/**
 * *create_array - a function that creates an array of chars
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}	
