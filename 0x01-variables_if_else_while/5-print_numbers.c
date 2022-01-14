#include <stdio.h>
<<<<<<< HEAD
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry block
 * Description: print single digit numbers
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
=======

/**
* main - Print all single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	return (0);
}
