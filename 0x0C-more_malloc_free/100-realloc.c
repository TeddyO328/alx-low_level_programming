#include "holberton.h"
<<<<<<< HEAD
#include <stdlib.h>
/**
 * *_realloc - allocates a memory block using malloc and free.
 * @ptr: pointer to memory allocated with malloc(old_size).
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block.
 *
 * Return: NULL if new_size = 0 and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
=======

/**
 * _memcpy - copy memory data from src to dest
 * @dest: memory destination
 * @src: memory source
 * @n: size of new memory
 */
void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: array length
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *newPtr;
if (new_size == 0)
{
	if (ptr != NULL)
		free(ptr);
	return (NULL);
}
else if (!ptr)
{
	return (malloc(new_size));
}
else if (new_size <= old_size)
{
	return (ptr);
}
else
{
	newPtr = malloc(new_size);
	if (newPtr)
	{
		_memcpy(newPtr, ptr, old_size);
		free(ptr);
	}
	return (newPtr);
}

return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
