#ifndef DOG_H
#define DOC_H

/**
 *struct dog - structure representing the dog
 *@name: Pointer to character string which represents the dog's name
 *@age: A float representing the dog's age
 *@owner: Pointer to character string which represents the dog's owner
 */
{
char *name;
float age;
char *owner;
} dog_t;

 /**
  *init_dog - initializes the dog's instance
  *@d a pointer to the dog instance to be initialized
  *@name: pointer to the dog's name
  *@age: the age of the dog
  *@owner: pointer to the dog's owner
  */
void int_dog(struct dog *d, char *name, float age, char *owner);

  #endif /* DOG_H */
