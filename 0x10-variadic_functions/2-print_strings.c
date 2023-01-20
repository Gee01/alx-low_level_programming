#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - Prints a number followed by a separator
 * @separator: This is the string to separate the numbers
 * @n: This is the number of arguments
 *
 * Return: Null void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
