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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
