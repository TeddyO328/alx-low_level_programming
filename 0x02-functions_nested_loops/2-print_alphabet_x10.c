#include "holberton.h"
<<<<<<< HEAD

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
			i++;
	}
=======
/**
 * print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
int i;
char a;

for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
