<<<<<<< HEAD
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
=======
#include "holberton.h"

/**
 * *array_range -  create an array of integers
 * @min: size of the array
 * @max: char to initialize
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
int *m;
int i;

if (min > max)
	return (NULL);

m = malloc((max - min + 1) * sizeof(int));

if (m == 0)
	return (NULL);


for (i = 0; min + i <= max; i++)
	m[i] = min + i;

return (m);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
