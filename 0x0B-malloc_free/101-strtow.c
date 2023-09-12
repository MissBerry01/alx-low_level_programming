#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words
 * @str: The input string
 * Return: A pointer to array of strings, NULL otherwise
 */
char **strtow(char *str)
{
	int a;
	int b = 0, c, count = 0;
	int i = 0;
	int length = strlen(str);
	char **words_c;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = 0; a < length; a++)
	{
		if ((str[a - 1] == ' ' || a == 0) && str[a] != ' ')
			count++;
	}

	words_c = malloc((count + 1) * sizeof(char *));
	if (words_c == NULL)
		return (NULL);

	for (a = 0; a < length && b < count; a++)
	{
		if (str[a] != ' ')
		{
			for (c = a; c < length && str[c] != ' '; c++)
				;

			words_c[b] = malloc((c - a + 1) * sizeof(char));
			if (words_c[b] == NULL)
			{
				for (i = 0; i < b; i++)
				{
					free(words_c[i]);
				}
				free(words_c);
				return (NULL);
			}
			strncpy(words_c[b], str + a, c - a);
			words_c[b][c - a] = '\0';
			b++;
			a = c;
		}
	}
	words_c[count] = NULL;

	return (words_c);
}
