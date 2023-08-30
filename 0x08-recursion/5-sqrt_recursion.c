#include "main.h"

/**
 * _sqrt_recursion - returns natural square root
 * @n:input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (a_sqrt(n, 0));
}

/**
 * a_sqrt - finds the squareroot the
 * natural squareroot numbers
 * @a: squareroot number to be found
 * @n:input number
 * Return: resulting square root or -1
 */

int a_sqrt(int n, int a)
{
if (a * a == n)
return (a);

if (a * a > n)
return (-1);

return (a_sqrt(n, a + 1));
}
