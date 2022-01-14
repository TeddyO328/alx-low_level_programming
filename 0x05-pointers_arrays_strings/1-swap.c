<<<<<<< HEAD
#include "holberton.h"
/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
=======
#include<stdio.h>
#include "holberton.h"
/**
*swap_int - swaps the values of two integers.
*@a: value to be evaluate.
*@b: value to be evaluate.
*Return: not.
*/
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
