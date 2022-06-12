#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - put a character
 * @c: the character
 **/
int _putchar(char c);
/**
 * _isupper - checks for uppercase character
 * @c: parameter to check
 * Return: 0
 **/
int _isupper(int c);
/**
 *  * _isdigit - functions that checks for a digit
 *   * @c: parameter to check
 *    * Return: 1 if is c is a digit, 0 otherwise
 *     **/
int _isdigit(int c);
/**
 *  * mul - function that multiples two integers
 *   * @a: parameter that multiples
 *    * @b: parameter that multipless
 *     * Return:
 *      **/
int mul(int a, int b);
/**
 *  * print_numbers - function that prints the numbers, from 0 to 9
 *   *
 *    **/
void print_numbers(void);
/**
 *  * print_most_numbers - function that print the numbers, except 2 and 4
 *   *
 *    **/
void print_most_numbers(void);
/**
 *  * more_numbers - function that prints 10 times the numbers, from 10 to 14
 *   *
 *    **/
void more_numbers(void);

#endif