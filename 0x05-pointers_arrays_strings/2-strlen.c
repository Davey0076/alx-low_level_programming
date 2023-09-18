#include "main.h"

/**
 * _strlen - function that gives length of a string
 * @s: length of string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	return (count);
}
