#include "holberton.h"
#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
int i = 0, size = 0;
char *m;

if (str == NULL)
	return (NULL);

for (; str[size] != '\0'; size++)
;

/*+1 on the size puts the end of string character*/
m = malloc(size * sizeof(*str) + 1);

if (m == 0)
	return (NULL);
else
{
	for (; i < size; i++)
		m[i] = str[i];
}
return (m);
=======
/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
