#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs structure
 * @name: dogs name
 * @age: age of dog
 * @owner: owners name
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
