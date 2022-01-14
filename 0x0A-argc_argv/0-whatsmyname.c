#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints program name, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
=======
/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	argc = argc;
	printf("%s\n", *argv);
	return (0);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
