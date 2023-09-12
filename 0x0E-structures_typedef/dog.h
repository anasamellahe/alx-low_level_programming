#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct for dogs' information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void _strcpy(char *dest, char *src);
int _strlen(char *s);
void    free_dog(dog_t *d);
#endif

