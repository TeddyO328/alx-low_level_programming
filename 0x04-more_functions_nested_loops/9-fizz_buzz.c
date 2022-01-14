#include <stdio.h>
/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
 *
 * Return: void.
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);

=======
* main - entry block
* @void: no argument
* Return: 0 Success
*/
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("Buzz");
	printf("\n");
	return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
