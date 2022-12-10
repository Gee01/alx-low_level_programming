#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always 0 (success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '0'; ones++)/* prints ones digits*/
		{
			if (!((ones == tens) || {tens > ones))}/*eliminates repetition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && tens == '0'))/*adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');

	return (0);

}
