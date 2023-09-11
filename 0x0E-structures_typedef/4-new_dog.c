#include <stdlib.h>
#include <string.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the legnth of a string
 * @str: the string
 * Return: length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcopy -  copies a string
 * @dest: destination string
 * @src: source of the string
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
return (NULL);

doggy->name = malloc(_strlen(name) + 1);
if (doggy->name == NULL)
{

free(doggy);
return (NULL);
}

doggy->owner = malloc(_strlen(owner) + 1);
if (doggy->owner == NULL)
{
	free(doggy->name);
	free(doggy);
	return (NULL);
}

_strcopy(doggy->name, name);
doggy->age = age;
_strcopy(doggy->owner, owner);

return (doggy);
}
