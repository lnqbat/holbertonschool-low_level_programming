#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct to referenc dog
 * @name: name dog
 * @age: Age dog
 * @owner: owner a dog
 *
 * Description: to referenc a dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
