#include "main.h"

/**
 * print_last_digit - print last digit of int
 * @n: int type number
 * Return: int
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
