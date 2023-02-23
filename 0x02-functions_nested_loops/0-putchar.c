#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        int i = 0;
        char message[] = "_putchar";
        while (message[i] != '\0')
        {
                _putchar(message[i]);
                i++;
        }
        _putchar('\n');
        return (0);
}
