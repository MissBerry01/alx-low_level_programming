#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size)
{
unsigned char *ub = (unsigned char *)b;
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
 {
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", ub[i + j]);
else
printf(" ");

if (j % 2 == 1)
printf(" ");
}
for (j= 0; j < 10; l++)
{
if (i + j < size)
{
if (ub[i + j] >= 32 && ub[i + j] <= 126)
printf("%c", ub[i + j]);
else
printf(".");
}
else
{
printf(" ");
}
}

printf("\n");
}
}
