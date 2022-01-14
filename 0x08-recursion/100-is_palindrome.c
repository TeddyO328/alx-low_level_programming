#include "holberton.h"
<<<<<<< HEAD

/**
 * last_index - returns the last index of a string (counts the null char)
 * @s: pointer the string
 * Return: int
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int pair);
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */


int check(char *s, int start, int end, int pair)
{

if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
	return (1);
else if (s[start] != s[end])
	return (0);
else
	return (check(s, start + 1, end - 1, pair));
=======
/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: length of string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * is_palind_recursive - checks if two chars of a string are equal
 * @s: string to be checked
 * @i: first index
 * @j: last index
 * Return: 1 if equal, else 0
 **/
int is_palind_recursive(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (is_palind_recursive(s, i + 1, j - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 * Return: 1 if string is palindrome  else 0
 **/
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (is_palind_recursive(s, 0, len - 1));
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
}
