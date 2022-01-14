#include "holberton.h"
<<<<<<< HEAD

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int n = 0;

if (*s > '\0')
{
	n += _strlen_recursion(s + 1) + 1;
}

return (n);
=======
/**
 * _strlen_recursion - finds the length of a string.
 * @s: pointer to string
 * Return: length of string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
