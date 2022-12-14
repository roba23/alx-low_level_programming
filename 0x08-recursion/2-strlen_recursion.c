/**
 * _strlen_recursion - find length of string
 * @s:string
 * Return: the length of integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
