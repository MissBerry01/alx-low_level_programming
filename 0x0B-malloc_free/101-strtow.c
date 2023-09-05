#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: Pointer to the string
 *
 * Return: Number of words
 */
int word_count(char *str)
{
int count = 0;
int i = 0;

while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
if (str[i] != '\0')
{
count++;
while (str[i] != ' ' && str[i] != '\0')
i++;
}
}

return (count);
}

/**
 * allocate_and_copy - Allocates memory for a word and copies it
 * @word: Pointer to the word to copy
 *
 * Return: Pointer to the copied word
 */
char *allocate_and_copy(char *word)
{
int length = 0;
char *copy;

while (word[length] != ' ' && word[length] != '\0')
length++;

copy = malloc(sizeof(char) * (length + 1));

if (copy == NULL)
return (NULL);

for (int i = 0; i < length; i++)
copy[i] = word[i];

copy[length] = '\0';
return (copy);
}

/**
 * split_string - Splits a string into words
 * @str: Pointer to the string
 * @t: Pointer to the array of words
 * @check: Number of words
 */
void split_string(char *str, char **t, int check)
{
int i = 0;
int j, k;

while (*str != '\0')
{
while (*str == ' ')
str++;

if (*str != '\0')
{
j = 0;

while (str[j] != ' ' && str[j] != '\0')
j++;

t[i] = allocate_and_copy(str);

if (t[i] == NULL)
{
while (i >= 0)
free(t[i--]);
free(t);
return;
}

k = 0;

while (k < j)
{
k++, str++;
}

i++;
}
}

t[i] = NULL;
}

/**
 * strtow - Splits a string into words
 * @str: Pointer to the string
 *
 * Return: Array of words
 */
char **strtow(char *str)
{
char **t;
int check;

if (str == NULL || str[0] == '\0')
return (NULL);

check = word_count(str);

if (check < 1)
return (NULL);

t = malloc(sizeof(char *) * (check + 1));

if (t == NULL)
return (NULL);

split_string(str, t);

return (t);
}

