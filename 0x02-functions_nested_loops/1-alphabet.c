#include "main.h"

/**
 * print_alphabet - print lowecase alphabets
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
