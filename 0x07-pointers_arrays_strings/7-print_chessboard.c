#include "holberton.h"
<<<<<<< HEAD

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: nothing.
=======
/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
<<<<<<< HEAD
		_putchar('\n');
=======

	_putchar('\n');
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	}
}
