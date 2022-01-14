<<<<<<< HEAD
=======

>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
  * main - generates random passwords for 101-crackme
  * Return: zero
  */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
=======
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
char a[100];
	int r, n, i;

	n = 0;
	i = 0;
	srand(time(NULL));
	while (n < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			a[i++] = r;
			n += r;
		}
	}
	a[i++] = (2772 - n);
	a[i] = '\0';
	printf("%s", a);

>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	return (0);
}
