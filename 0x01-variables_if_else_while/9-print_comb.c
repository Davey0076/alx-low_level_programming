#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combination of numbers
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
		if (n == 57)
			continue;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
