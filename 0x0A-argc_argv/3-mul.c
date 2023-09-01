#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of command arguements
 * @argv: array that contains the command
 * arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
int mul;
int i, j;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i *j;
printf("%d\n", mul);
return (0);
}
