<<<<<<< HEAD
#include "holberton.h"
/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
*/


int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
=======
#include<stdio.h>
#include "holberton.h"
/**
*_strlen - returns the length of a string..
*@s: value to be evaluate.
*Return: not.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
