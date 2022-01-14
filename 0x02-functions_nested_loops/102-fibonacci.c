#include "holberton.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - prints first 50 numbers of the fibonacci sequence
=======
 * main - prints first 50 numbers of the fibonacci series
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
	int i, n;
	long f1, f2, next;

	f1 = 1;
	f2 = 2;
	n = 50;

	for (i = 0; i < n; i++)
	{
		if (i == 49)
		{
			printf("%lu", f1);
		} else
		{
			printf("%lu, ", f1);
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
	}
	printf("\n");
	return (0);
=======
int i, j = 50;
long fib1 = 1, fib2 = 2, next;

for (i = 0; i < j; i++)
{
if (i == 49)
printf("%lu", fib1);
else
{
printf("%lu, ", fib1);
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}
}
printf("\n");
return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
