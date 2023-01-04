/**
 * _pow_recursion - calculate number x to the power of y
 * @x:base  
 * @y:power
 * Return: return result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else 
		return (x * _pow_recursion(x, y - 1));
}
