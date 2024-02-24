#include "main.h"
/**
 * _islower - entry point
 * main - checks for lowercase character.
 * @c: The character to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
