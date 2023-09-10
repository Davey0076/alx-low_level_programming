#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
