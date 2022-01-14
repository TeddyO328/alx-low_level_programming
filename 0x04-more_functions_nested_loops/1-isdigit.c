#include "holberton.h"
<<<<<<< HEAD

/**
 * _isdigit - check for a digit
 * @c : character to check
 * Return:0 or 1
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);

=======
/**
* _isdigit - function that check if it's a digit
* @c: takes in a character/digit
* Return: 1 if digit and 0 if anything else
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
