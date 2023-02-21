#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main( void ){
        int length;
        char message[] = "_putchar";

        length = strlen(message);
        for (int count = 0; count < length; count++)
        {
                if (message[count] == '\0')
                {
                putchar('\n');
                break;
                }
                else
                putchar(message[count]);
        }
        return 0;
}
