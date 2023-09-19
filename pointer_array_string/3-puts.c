#include "main.h"

/**
 * _puts - function prints a string followed by a new line
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
