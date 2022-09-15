#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_isupper -  a function that checks for a digit (0 through 9).,
 *description - checks for digit char
 *@c: character to be cheked
 *Return: xx
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
