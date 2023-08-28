#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum of two diagonals
 * of a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 * Return:void
 */

void print_diagsums(int *a, int size)
{
int num, sum1 = 0, sum2 = 0;

for (num = 0; num < size; num++)
{
sum1 += a[num];
a += size;
}

a -= size;

for (num = 0; num < size; num++)
{
sum2 += a[num];
a -= size;
}

printf("%d, %d\n", sum1, sum2);
}
