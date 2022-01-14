#include "holberton.h"
<<<<<<< HEAD

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
=======
/**
 * jack_bauer - prints a 24 hour timer in military style
 */
void jack_bauer(void)
{
int i, j;

for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
_putchar(i / 10 + 48);
_putchar(i % 10 + 48);
_putchar(':');
_putchar(j / 10 + 48);
_putchar(j % 10 + 48);
_putchar('\n');
}
}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
