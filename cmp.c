#include "shell.h"
/**
 * our_strcmp - copies the string
 * 
 * @string1: string to copy
 * @string2: string to be copied
 *
 * Return: string
 */
int our_strcmp(const char *string1, const char *string2)
{
	while (*string1 && *string2 && *string1 == *string2)
	{
		string1++;
		string2++;
	}

	return ((int)(*string1 - *string2));
}
