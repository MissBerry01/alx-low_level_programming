#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the
 * opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int bytes, n;
	unsigned char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (unsigned char *)main;

	for (n = 0; n < bytes; n++)
	{
		if (n == bytes - 1)
		{
			printf("%02x\n", arr[n]);
			break;
		}
		printf("%02x ", arr[n]);
	}
	return (0);
}
