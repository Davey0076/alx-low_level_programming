#include "main.h"

/**
 * _abs - function to compute absolute value of a number
 * @c: nummber to return absolute value
 * Return: ABsolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
