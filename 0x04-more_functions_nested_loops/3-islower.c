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
int _islower(int c)
{
	if (65 < = (c - 32) <= 122)
		return (1);
	else
		return (0);
}
