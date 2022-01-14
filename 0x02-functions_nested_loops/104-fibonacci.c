#include <stdio.h>
<<<<<<< HEAD


/**
 *numLength - returns the lenth of string
 *@num : operand number
=======
/**
 *numLength - returns the length of string
 *@num: operand number
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
 *Return: number of digits
 */
int numLength(int num)
{
<<<<<<< HEAD
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}


	return (length);
}

/**
 *main - prints the first 98 fibonaci sequences
 *Return: 0
 */
int main(void)
{

	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{

		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
=======
int length = 0;

if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
length += 1;
}
return (length);
}
/**
 * main - prints the first 98 digits of the fibonacci series
 * Return: 0
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, next, nexto = 0;
unsigned long mx = 100000000, fib1o = 0, fib2o = 0;
short int i = 1, initial0s;

while (i <= 98)
{
if (fib1o > 0)
printf("%lu", fib1o);
initial0s = numLength(mx) - 1 - numLength(fib1);
while (fib1o > 0 && initial0s > 0)
{
printf("%i", 0);
initial0s--;
}
printf("%lu", fib1);
next = (fib1 + fib2) % mx;
nexto = fib1o + fib2o + (fib1 + fib2) / mx;
fib1 = fib2;
fib1o = fib2o;
fib2 = next;
fib2o = nexto;
if (i != 98)
printf(", ");
else
printf("\n");
i++;
}
return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
