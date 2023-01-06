/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - first n bytes of the memory area will be filled, pointed to by s
 *
 * with constant byte b, fills a buffer with a constant for a specified size
 *
 * @s: To be filled (a buffer)
 *
 * @b: It is the char that will be used to fill buffer
 *
 * @n: Represents the no of bytes to fill in the memory array of s
 *
 * Return: a pointer to the memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
