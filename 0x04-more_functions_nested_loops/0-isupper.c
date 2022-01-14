#include "holberton.h"
<<<<<<< HEAD

/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90);

=======
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
