#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_isupper -  a function that checks for uppercase character.,
 *
 *followed by a new line
 *
 *description: xxx
 *
 *Return: xx
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
