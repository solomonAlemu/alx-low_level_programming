#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to pr
 * Return: On success 1.
 * On error, -1 is returned, and errn
 */
int _putchar(char c);

/**
 *print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 *Return: void
 *
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed
 * by  a new line.
 *Return: void
 *
 */
void print_alphabet_x10(void);

/**
*_isupper - a function that checks for upper case character
*description - cheks for upper case characters
*@c: the character to be checked
*Return: void
*/
int _isupper(int c);

/**
 *_isdigit -  a function that checks for a digit (0 through 9).
 *description - cheks fordigit characters
 *@c: the character to be checked
 *Return: void
*/
int _isdigit(int c);
#endif
