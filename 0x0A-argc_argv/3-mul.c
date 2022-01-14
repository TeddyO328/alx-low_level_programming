#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 *main-print sum of 2 numbers.
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
=======
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	{
		printf("Error\n");
		return (1);
	}
<<<<<<< HEAD

=======
/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	return (0);
}
