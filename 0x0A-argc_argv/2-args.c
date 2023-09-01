 #include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line in arguements
 * @argv: array that contains the command arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
