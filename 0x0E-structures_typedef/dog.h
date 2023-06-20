#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog-ser-defined data type that represents a dog
 * @name:name of the dog
 * @age:age of te dog
 * @owner:owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
