#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_alphabet - a program that prints the alphabet in lowercase,
 *followed by a new line*
 *description: xxx
 *Return: xx
 */
void print_alphabet(void)
{
	char output[] = "abcdefghijklmnopqrstuvwxyz";

	size_t i = 0;

	size_t arrayLength = strlen(output);

	for (i = 0; i < arrayLength; i++)
	{

		_putchar(output[i]);

	}

	_putchar('\n');

}
