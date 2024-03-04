#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, L, L1;

	L = 0;
	L1 = 0;

	while (s[L] != '\0')
	
    {
		L++;
	}
	
    L1 = L - 1;

	for (i = 0; i < L / 2; i++)
	{
		tmp = s[i];
		s[i] = s[L1];
		s[L1--] = tmp;
	}
}

