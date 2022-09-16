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

/**
 *mul - a function that multiplies two integers
 *dectiption - multiplies two integers
 *@a: integers two be multiplies
 *@b:>>
 *Return: void
 */
int mul(int a, int b);

/**
 *print_numbers - prints from 0 to 9
 *description - >>
 *Returns: void
 */
void print_numbers(void);

/**
 *prit_most_numbers - print 0 to 9 except 2 and 4
 *description - >>
 *Return: void
*/
void print_most_numbers(void);

/**
 *more_numbers - prints from 0 to 1
 *description - >>
 *Reurn: void
*/
void more_numbers(void);
#endif
