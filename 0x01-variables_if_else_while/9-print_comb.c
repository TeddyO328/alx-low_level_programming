#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
=======

/**
 * main - main function
 * Description: Print numbers 0 - 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i != 57)
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
		{
			putchar(',');
			putchar(' ');
		}
<<<<<<< HEAD
		c++;
=======
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	}
	putchar('\n');
	return (0);
}
