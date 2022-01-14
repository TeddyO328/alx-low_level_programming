#include "holberton.h"
<<<<<<< HEAD

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

=======
/**
 * _isalpha - returns 1 if c is a letter
 * @c: integer to be tested
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
