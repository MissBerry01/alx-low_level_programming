#include <stdio.h>

/**
 * main - main point
 *
 * Return : 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
{
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
}

putchar('\n');

return (0);
}
