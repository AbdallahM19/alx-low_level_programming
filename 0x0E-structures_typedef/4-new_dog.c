#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_len - loop of len strings
 * @s: char
 * Return: len
*/

int str_len(char *s)
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

char *str_cpy(char *d, char *s)
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
	dog_t *dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);
	dog_new->name = malloc(sizeof(char) * (str_len(name) + 1));
	dog_new->owner = malloc(sizeof(char) * (str_len(owner) + 1));

	if (dog_new->name == NULL || dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new->owner);
		free(dog_new);
		return (NULL);
	}

	str_cpy(dog_new->name, name);
	dog_new->age = age;
	str_cpy(dog_new->owner, owner);

	return (dog_new);
}
