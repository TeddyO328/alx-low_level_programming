<<<<<<< HEAD

#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
=======
#include <stdio.h>
/**
 * main - prints sum of fibonacci numbers under 4,000,000 & divisible by 2
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
=======
long fib1 = 1, fib2 = 2, sum = fib2, next;

while (fib2 < 4000000)
{
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
sum += (fib2 % 2 == 0) ? fib2 : 0;
}
printf("%li\n", sum);
return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
