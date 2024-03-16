#include "dog.h"
#include <stdio.h>
/**
 * init_dog -  a function that initialize a struct dog.
 * @d: name of struct
 * @name: name of dog of struct
 * @owner: name of the owner
 * @age: age of a dog
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
