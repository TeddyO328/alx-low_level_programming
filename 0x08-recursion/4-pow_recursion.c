#include "holberton.h"
<<<<<<< HEAD

/**
 * _pow_recursion - Search a string for any of a set of bytes.
 * @x: base
 * @y: exposant
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

=======
#include <stdio.h>
/**
 *  _pow_recursion - calculates value of x raised to the power of y
 * @x: given number
 * @y: exponent
 * Return: value of x raised to the power of y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
