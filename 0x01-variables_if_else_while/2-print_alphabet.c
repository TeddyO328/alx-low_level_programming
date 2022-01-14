#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
/**
 * main - entry point
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
=======
/**
 * main - Entry point
 * Description: Print lower case a-z
 * Return: Return
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	putchar('\n');
	return (0);
}
