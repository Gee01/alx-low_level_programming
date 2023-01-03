/*
 * File: 1-memcpy.c
 * Auth: Gee01
 */

#include "main.h"

/**
 * _memcpy - occupies a buffer with a constant for a specified size
 *
 * @dest: The actual buffer to be filled
 *
 * @src: Represents the char that will be used to fill buffer
 *
 * @n: Signifies the no of bytes to fill in the memory array of dest
 *
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
