#include "holberton.h"

/**
<<<<<<< HEAD
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

void print_times_table(int n)
{

int a = 0, rep, b;

if (n < 0 || n > 15)
	return;

while (a <= n)
{
	for (b = 0; b <= n; b++)
	{
		rep = a * b;
		if (b == 0)
			_putchar('0' + rep);
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + rep);
		}
		else if (rep < 100)
		{
			_putchar(' ');
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}
		else
		{
			_putchar('0' + rep / 100);
			_putchar('0' + (rep - 100) / 10);
			_putchar('0' + rep % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	a++;
}
=======
* print_times_table - Prints the n times table
*
* @n: number times table (0 < n <= 15)
*
* Return: no return
*/
void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
	_putchar(48);
	for (b = 1; b <= n; b++)
	{
		op = a * b;
		_putchar(44);
		_putchar(32);
		if (op <= 9)
		{
		_putchar(32);
		_putchar(32);
		_putchar(op + 48);
		}
		else if (op <= 99)
		{
		_putchar(32);
		_putchar((op / 10) + 48);
		_putchar((op % 10) + 48);
		}
		else
		{
		_putchar(((op / 100) % 10) + 48);
		_putchar(((op / 10) % 10) + 48);
		_putchar((op % 10) + 48);
		}
	}
	_putchar('\n');
	}
	}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
