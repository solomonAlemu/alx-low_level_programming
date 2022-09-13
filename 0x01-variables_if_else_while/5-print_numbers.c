#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *main - Write a program that prints the alphabet in lowercase,
*followed by a new line*
 *description: xxx
 *Return: xx
 */
int main (void)
{
	char output[] = "abcdefghijklmnopqrstuvwxyz";

	size_t i = 0;

	size_t arrayLength = strlen(output);

	for (i = 0; i < arrayLength; i++)
	{
		if (output[i] != 'q' && output[i] != 'e')
			putchar(output[i]);
		else continue;
	}
	putchar('\n');
	return (0);
}
