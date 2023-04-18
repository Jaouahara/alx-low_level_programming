#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: lone dog struct in a big kitty world
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
