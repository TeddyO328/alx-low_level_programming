#include "holberton.h"

/**
<<<<<<< HEAD
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 **/

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
_putchar('-');
n1 = -n;
}

if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
=======
 * print_number -print number putchar
 * @n:integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar(x % 10 + '0');
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
