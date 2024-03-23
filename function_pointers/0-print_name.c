#include "function_pointers.h"

/**
 * print_name - Print function pointer
 * @name: char string
 * @f: string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}