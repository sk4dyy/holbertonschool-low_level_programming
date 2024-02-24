#include "main.h"
/**
 * print_alphabet - entry point
 * Description: This function prints the lowercase alphabet characters
 *              from 'a' to 'z', each followed by a new line.
 */
void print_alphabet(void)
{
char alpha;
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
