#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string to be converted
 * Return: the  int converted from the string
 */
int _atoi(char *s)

{

int a = 0;
int b = 1;
int c = 0;
int d = 0;
int e = 0;
int digit = 0;

while (s[d] != '\0')
d++;

while (a < d && e == 0)
{
if (s[a] == '-')
b *= -1;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
c = c * 10 + (b *digit);
e = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
e = 0;
}
a++;
}
if (e == 0)
return (0);

return (c);
}

