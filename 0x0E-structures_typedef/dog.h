#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "dog.h"

/**
*struct dog - a new type of data
*representing a dog
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;
	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
