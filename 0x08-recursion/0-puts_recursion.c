#include "main.h"

/**
 * _puts_recursion - Prints a string recursively
 *
 *
 * @s: Is the string to be printed
 *
 * Return: Void
 *
 */

void _puts_recursion(char *s)

{

	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}
	_putchar(*s);

	_puts_recursion(++s);
}
