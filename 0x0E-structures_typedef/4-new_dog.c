#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - prints the size of a string in bytes
 *
 * @s: pointer that will store the string's location
 *
 * Return: size of the string without the null \0 placed at the end of it
 */

int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
 * _strcpy - copies the string from a pointer to another
 *
 * @src: pointer that has the string information
 * @dest: pointer to be copied
 *
 * Return: string copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: the variable already initialized
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = (char *)malloc(_strlen(name) + 1);
	new_owner = (char *)malloc(_strlen(owner) + 1);
	if (new_owner == NULL || new_name == NULL)
		return (NULL);
	new_dog->name = _strcpy(new_name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_owner, owner);
	return (new_dog);
}

