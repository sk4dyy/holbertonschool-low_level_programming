#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @a: string 1
 * @b: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *a, char *b, unsigned int n)
{
char *p;
unsigned int strlen1, i, c;

if (a == NULL)
a = "";
if (b == NULL)
b = "";

strlen1 = _strlen(a);
p = malloc((strlen1 + n + 1) * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0, c = 0; i < (strlen1 + n); i++)
{
if (i < strlen1)
p[i] = a[i];
else
p[i] = b[c++];
}
p[i] = '\0';

return (p);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
