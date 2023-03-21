/*
 * File: 2-strchr.c
 * Auth: Gee01 Task 2
 */

#include "main.h"
#include <stddef.h>

/**
 * _strchr - This will find the first occurence of a char in a string
 *
 * @s: Is the string to be searched
 *
 * @c: The character to be found
 *
 * Return: Pointer to the first occurence of the char or null
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
