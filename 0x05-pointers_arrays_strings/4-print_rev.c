#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string to be printed in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	for (i = count; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
