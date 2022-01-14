#include "holberton.h"
<<<<<<< HEAD

/**
 * factorial - finds factorial
 * @n: int
 * Return: int
 */

int factorial(int n)
{

if (n < 0)
{
	return (-1);
}
else if (n == 0)
{
	return (1);
}

return (n * factorial(n - 1));

=======
/**
 * factorial - calculates the factorial of a given number.
 * @n: given number
 * Return: factorial
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
