#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *d;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(nlen * sizeof(d->name));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(olen * sizeof(d->owner));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		d->owner[i] = owner[i];
	return (d);
}
