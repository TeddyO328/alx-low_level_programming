<<<<<<< HEAD
#include "holberton.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

int len, i, half;
char temp;

for (len = 0; s[len] != '\0'; len++)
;

i = 0;

half = len / 2;

while (half--)
{
	temp = s[len - i - 1];
	s[len - i - 1] = s[i];
	s[i] = temp;
	i++;
}

=======
#include <stdio.h>
#include "holberton.h"
/**
 *rev_string - update value.
 *@s: value to be evaluate.
 *Return: not.
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
