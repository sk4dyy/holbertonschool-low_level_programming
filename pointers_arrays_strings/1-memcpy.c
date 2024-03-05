#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: where
 * @n: number
 * @src: memory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
