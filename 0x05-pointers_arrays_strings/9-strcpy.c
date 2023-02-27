#include "main.h"

/**
 **_strcpy- copies the string pointed to by src, including the
 *terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: buffer to copy the string to.
 * @src: string to be copied.
 * return : a pointer to the string dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	*dest = '\0';
	return (dest);
}
