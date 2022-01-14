#include "holberton.h"
<<<<<<< HEAD

/**
 * print_sign - prints the sign of a number
 * @n: interger to be tested
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
=======
/**
 * print_sign - returns 1 if n is +, -1 if n negative and 0 otherwise
 * @n: interger to be tested
 * Return: 1, -1 or 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
