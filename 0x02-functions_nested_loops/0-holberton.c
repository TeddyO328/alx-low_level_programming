#include "holberton.h"

/**
 * main - Print holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *h_name = "Holberton";
int i;

for (i = 0; i <= 10; i++)
{
_putchar(h_name[i]);

}
_putchar('\n');
return (0);
}
