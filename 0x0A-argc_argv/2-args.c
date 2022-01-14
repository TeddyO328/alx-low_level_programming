#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int i = 0;

while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}

return (0);
=======
/**
 * main - a program that prints all arguments it receives.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
