#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: is pointer to struct dog.
 * @name: name to intialize.
 * @age: age to intialize.
 * @owner: owner to intialize.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return (1);
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
