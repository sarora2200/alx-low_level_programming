#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - function that creates a new dog.
 * @name: name to intialize.
 * @age: age to intialize.
 * @owner: owner to intialize.
 * Return: pointer to the new dog, or NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_copy = malloc(strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(name_copy, name);
owner_copy = malloc(strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
strcpy(owner_copy, owner);
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
