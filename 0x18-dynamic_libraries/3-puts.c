#include "main.h"

/**
 * _puts -	Writes a string to stdout
 *
 * @str:		The string to be written
 *
 * Return:	Nothing
 */

void _puts(char *str)

{

	int tr;

	for (tr = 0; *(str + tr) != '\0'; tr++)
		_putchar(*(str + tr));

	_putchar('\n');
}
