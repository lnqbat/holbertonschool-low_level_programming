#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new fiche dog
 * @name: name a dog
 * @age: age dog
 * @owner: owner a dog
 * Return: New dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0;
	int i;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len] != '\0')
	{
		name_len++;
	}
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->name[name_len] = '\0';
	for (i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[owner_len] = '\0';
	new_dog->age = age;
	return (new_dog);
}
