<<<<<<< HEAD

#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
=======
#include<stdio.h>
#include "holberton.h"
/**
 *print_array - update value.
 *@a: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
		{
			printf(", ");
		}
	}
	printf("\n");
<<<<<<< HEAD

=======
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
