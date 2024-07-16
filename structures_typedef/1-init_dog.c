#include "dog.h"
/**
 *init_dog - this initializes a variable of the dog's structure
 *@d: The struct dog to initialize
 *@name: The name of the dig
 *@age: The dog's age
 *@owner: The owner of the dog
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
