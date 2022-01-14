<<<<<<< HEAD

#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
=======
#include "holberton.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
<<<<<<< HEAD
	{
		largest = a;
	}

	else if (b >= a && b >= c)
	{
		largest = b;
	}

	else
	{
		largest = c;
	}
=======
		{
		largest = a;
		}
	else if (b >= a && b >= c)
		{
		largest = b;
		}
	else
		{
		largest = c;
		}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382

	return (largest);
}
