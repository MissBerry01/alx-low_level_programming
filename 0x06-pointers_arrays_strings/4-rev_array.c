#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int temp, check;

n = n - 1;
check = 0;
while (check <= n)
{
temp = a[check];
a[check++] = a[n];
a[n--] = temp;
}
}
