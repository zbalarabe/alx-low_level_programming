#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: integer
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
