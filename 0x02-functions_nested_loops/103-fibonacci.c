#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fb1 = 0, fb2 = 1, fbsum;
float total_sum;

while (1)
{
fbsum = fb1 + fb2;
if (fbsum > 4000000)
break;

if ((fbsum % 2) == 0)
tot_sum += fbsum;

fb1 = fb2;
fb2 = fbsum;
}
printf("%.0f\n", total_sum);

return (0);
}
