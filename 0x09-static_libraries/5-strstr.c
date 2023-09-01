#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched for the substring
 * @needle: the substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
int num;

if (*needle == 0)
return (haystack);

while (*haystack)
{
num = 0;

if (haystack[num] == needle[num])
{
do {
if (needle[num + 1] == '\0')
return (haystack);

num++;

} while (haystack[num] == needle[num]);
}
haystack++;
}
return ('\0');
}
