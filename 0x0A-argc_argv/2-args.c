#include <stdio.h>
#include "main.h"

/**
 * main - Print the program name
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - Print each argument*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
