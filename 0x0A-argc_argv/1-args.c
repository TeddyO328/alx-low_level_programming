#include <stdio.h>
/**
<<<<<<< HEAD
 *main-print number of arguments passed.
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
=======
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
	argv = argv;
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	printf("%d\n", argc - 1);
	return (0);
}
