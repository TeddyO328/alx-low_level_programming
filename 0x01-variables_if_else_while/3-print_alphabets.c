#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
/**
 * main - entry block
 * Description: alphabets in lower and upper
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
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
=======

/**
 * main - print alphabet in lower and uppercase
 *
 *
 * Return: (0) Success
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
