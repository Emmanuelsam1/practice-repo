#include "main.h"

/**
 * _strlen - function to return lenght of string
 * @s: string to be counted
 * Return: void
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ;  s[i] != '\0' ; i++)
		count++;
	return (count);
}
