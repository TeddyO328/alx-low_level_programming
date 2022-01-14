#include "holberton.h"
/**
<<<<<<< HEAD
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
		return (nv);
=======
 * _abs - returns -n if n is less than 0 otherwise n
 * @n: integer to be tested
 * Return: _abs(n)
 */
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-1 * n);
}
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: lastdigit
 */
int print_last_digit(int n)
{
int lastDigit;

lastDigit = _abs((n % 10));
_putchar(lastDigit + 48);
return (lastDigit);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
