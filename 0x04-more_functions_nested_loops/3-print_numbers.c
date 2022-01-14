<<<<<<< HEAD
#include "holberton.h"

/**
 * print_numbers - prints numbers
 * Return:0
 */

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;

	}
	_putchar('\n');

=======

#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
