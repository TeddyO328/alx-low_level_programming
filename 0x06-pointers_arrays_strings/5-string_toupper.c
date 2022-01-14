#include "holberton.h"
/**
<<<<<<< HEAD
 * *string_toupper - changes all lowercase letters of a string to upper.
 *
 * @str: string to return.
 * Return: string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
=======
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
