#include "main.h"

/**
 * main - check the code for 'Returns the value of the last digit'.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int n = n % 10;

	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
