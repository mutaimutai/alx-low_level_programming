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
#endif
