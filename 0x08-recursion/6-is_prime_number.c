#include "holberton.h"
<<<<<<< HEAD
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @resp:int
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int resp);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @resp: int
 * Return: int
 */

int check_prime(int n, int resp)
{

if (resp >= n && n > 1)
	return (1);
else if (n % resp == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, resp + 1));
=======
/**
 * sqtRecursive - computes square root recursively
 * @n: given number
 * @m: comparison number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqtRecursive(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqtRecursive(n / 2, n));
}
/**
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 **/
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
