#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - sdfghj
 * @str: dfgh
 * Return: fghjk
 */
int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _strcpy - sdfgh
 * @src: fghj
 * @dest: dfgh
 * Return: dfg
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

/**
 * new_dog - dfghj
 * @name: dfg
 * @age: dfgh
 * @owner: dfghj
 * Return: sdfgh
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner || age < 0)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
