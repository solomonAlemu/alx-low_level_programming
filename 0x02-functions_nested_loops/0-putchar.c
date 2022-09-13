#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 *main - Write a program that prints the alphabet in lowercase,
 *followed by a new line*
 *description: xxx
 *Return: xx
 */
int main (void)
{
	char output[] = "_putchar";

	size_t i = 0;

	size_t arrayLength = strlen(output);

	for (i = 0; i < arrayLength; i++)
	{

		_putchar(output[i]);

	}

	_putchar('\n');

	return (0);
}
