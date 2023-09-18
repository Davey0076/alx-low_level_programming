#include "main.h"

/**
 * puts2 - function to print every other character
 * @str: string to be printed
 * Return : void
 */
void puts2(char *str)
{
	int count = 0;
	int z = 0;
	char *p = str;
	int n;

	while (*p != '\0')
	{
		p++;
		count = count + 1;
	}
	z = count - 1;
	for (n = 0; n <= z; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
