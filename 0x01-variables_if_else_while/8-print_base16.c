#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	n = 48;
	m = 97;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
