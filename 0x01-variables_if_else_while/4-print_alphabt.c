#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lowercase letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
