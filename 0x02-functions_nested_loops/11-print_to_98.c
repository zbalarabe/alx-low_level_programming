#include <stdio.h>
/**
 * print_to_98 - Natural Numbers from n to 98, follwed by new line
 *
 * @n: Integer
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);

	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
