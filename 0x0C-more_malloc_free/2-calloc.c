#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
	*s++ = b;

return (ptr);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;

if (size == 0 || nmemb == 0)
	return (NULL);
<<<<<<< HEAD
m = malloc(sizeof(int) * nmemb);
=======

m = malloc(nmemb * size);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382

if (m == 0)
	return (NULL);

<<<<<<< HEAD
_memset(m, 0, nmemb * sizeof(int));
=======
_memset(m, 0, nmemb * size);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382

return (m);
}
