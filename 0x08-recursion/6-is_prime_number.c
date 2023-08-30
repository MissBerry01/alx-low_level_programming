#include "main.h"
/**
 * is_prime_number -  returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: the input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
return (prime_a(n, 2));
}
/**
 * prime_a - calculate if its a prime number
 * @a: input
 * @b: divisor
 * Return: 0
 */

int prime_a(int a, int b)
{
if (a <= 1 || (a != b && a % b == 0))
{
return (0);
}
if (a == b)
{
return (1);
}
return (prime_a(a, b + 1));
}
