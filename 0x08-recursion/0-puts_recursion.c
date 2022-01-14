#include "holberton.h"
<<<<<<< HEAD

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 * Return: void
 */

=======
/**
  * _puts_recursion - prints a string, followed by a new line
  * @s: pointer to string
  * Return: nothing
  **/
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
<<<<<<< HEAD
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
=======
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
