#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: value less than 0 if string is less than the other value,
 * value greater than 0  if string is greater than the the other value
 * and 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
int check, compare_value;

check = 0;
while (s1[check] == s2[check] && s1[check] != '\0')
{
check++;
}
compare_value = s1[check] - s2[check];
return (compare_value);
}
