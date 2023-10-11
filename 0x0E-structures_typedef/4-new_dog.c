#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_len - loop of len strings
 * @s: char
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * str_cpy - Copy a str from source to destination.
 * @d: Destination string.
 * @s: Source string.
 * Return: pointer to the destination string.
 */

char *_strcpy(char *d, char *s)
{
	int a = 0;

	while(s[a] != '\0')
	{
		d[a] = s[a];
		a++;
	}
	d[a] = '\0';

	return (d);
}

/**
 * new_dog - Write a function that creates a new dog.
 * @name: name, type = char *
 * @age: age, type = float
 * @owner: owner, type = char *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	int a1, a2;

	a1 = _strlen(name);
	a2 = _strlen(owner);

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);

	dog_new->name = malloc(sizeof(char) * (a1 + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	dog_new->owner = malloc(sizeof(char) * (a2 + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new);
		free(dog_new->name);
		return (NULL);
	}

	_strcpy(dog_new->name, name);
	dog_new->age = age;
	_strcpy(dog_new->owner, owner);

	return (dog_new);
}
