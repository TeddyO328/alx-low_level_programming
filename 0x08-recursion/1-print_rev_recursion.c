#include "holberton.h"
<<<<<<< HEAD

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string
 * *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
=======
/**
 * _print_rev_recursion -  prints a string, in reverse.
 * @s: pointer to string
 * Return: nothing
 **/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
