#include "main.h"
#include <string.h>
/**
 * check_palindrome -check if a string is palindrome or not
 * @i: starting of string
 * @j: end of string
 * @s: the string
 * Return: 1 if it is palindrome
 * 0 otherwise
 */
int check_palindrome(int i, int j, char *s)
{
	if (s[i] != s[j])
		return (0);
	else if (i < j)
		return (check_palindrome(i + 1, j - 1, s));
	return (1);
}
/**
 * is_palindrome - give the string to be checked to checker
 * @s: string
 * Return: same as check_palindrome
 */
int is_palindrome(char *s)
{
	return (check_palindrome(0, strlen(s) - 1, s));
}
