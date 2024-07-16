#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a structure representing a dog
 *@name: Pointer to character string representing the dog's name
 *@age: Float representing the dog's age
 *@owner:Pointer to character string representing the dog's owner
 *
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/**
 * new_dog - creates a new dog instance
 *@name: Pointer to the dog's name
 *@age: the dog's age
 *@owner: Pointer to the dog's owner
 *
 *Return: Pointer to a newly created dog instance
 */
dog_t *new_dog(char *name, float age, char *owner);

 /**
  *print_dog - prints the details of the dog
  *@d: pointer  to the dog's instance to be printed
  */
void print_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 *print_dog - Prints a struct dog
 *@d: The struct dog to print
 *Return: void
 */
inline dog_t *new_dog(char *name, float age, char *owner);


void free_dog(dog_t *d);

#endif /* DOG_H */
