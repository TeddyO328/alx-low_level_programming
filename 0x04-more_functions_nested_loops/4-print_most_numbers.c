#include "holberton.h"

/**
<<<<<<< HEAD
 * print_most_numbers - prints numbers
 * Return:0
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		n++;
	}
	_putchar('\n');

=======
* print_most_numbers -  prints the numbers except 2 and 4.
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			_putchar(c);
	_putchar('\n');
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
