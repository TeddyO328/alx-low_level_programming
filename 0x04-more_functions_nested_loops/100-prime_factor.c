#include <stdio.h>
<<<<<<< HEAD

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: 0.
 */

int main(void)
{
long num = 612852475143;
long divisor = 2;
long larg_prim = 0;

while (num != 1)
{
if (num % divisor == 0)
{
num = num / divisor;
larg_prim = divisor;
}
divisor += 1;
}
printf("%ld\n", larg_prim);
return (0);
=======
/**
* main - entry block
* @void: no argument
* Return: 0
*/
int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
