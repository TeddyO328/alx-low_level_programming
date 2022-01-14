#include <stdio.h>
<<<<<<< HEAD
/**
 * main - prints to string
 *
 * Description: Prints "and that piece of art is useful..." without puts
 *
 * Return: 1
 */
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
__asm__ ("syscall"
: "=a" (ret)
: "a" (syscall),
"D" (fd),
"S" (s),
"d" (l));
return (1);
=======
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
