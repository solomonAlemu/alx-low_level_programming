#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_alphabet_x10 - a program that prints 10 times the alphabet, in lowerc,
 *
 *followed by a new line
 *
 *description: xxx
 *
 *Return: xx
 *
 */
void print_alphabet_x10(void)
{
	char output[] = "abcdefghijklmnopqrstuvwxyz";

	int i, x  = 0;

	int arrayLength = strlen(output);

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < arrayLength; i++)
		{
			_putchar(output[i]);
		}

		_putchar('\n');
	}
}
