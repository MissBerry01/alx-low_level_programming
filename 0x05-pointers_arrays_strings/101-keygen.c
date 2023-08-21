#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int passwd[100];
int a, sum, b;

sum = 0;

srand(time(NULL));
for (a = 0; a < 100; a++)
{
passwd[a] = rand() % 78;
sum += (passwd[a] + '0');
putchar(passwd[a] + '0');
if ((2772 - sum) -'0' < 78)
{
b = 2772 - sum - '0';
sum += b;
putchar(b + '0');
break;
}
}
return (0);
}
