#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: int
 * @size: int
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (c < nmemb * size)
	{
		p[c] = 0;
		c++;
	}
	return (p);
}
