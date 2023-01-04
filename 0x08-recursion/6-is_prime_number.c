/**
 * find_if_prime - check wether a number is prime or not
 * @i: iteration
 * @n:number to be checked
 * Return : 1 if it is prime 
 * 0 if it is not
 */
int find_if_prime(int i, int n)
{
	if (n % i == 0 || n < 2)
		return (0);
	else if (i == n - 1)
		return (1);
	else if (n > i)
		return (find_if_prime(i + 1, n));
	return (1);
}
/**
 * _is_prime_number - determine of a number is prime or not
 * @n:number
 * Retrun : 1 if prime
 * 0 if not prime
 */
int is_prime_number(int n)
{
	return (find_if_prime(2, n));
}
