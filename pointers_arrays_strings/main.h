#ifndef MAIN_H
#define MAIN_H

/**
 *  * reset_to_98 - function that takes a pointer and updates the value it points to to 98
 *   * @n: a parameter that takes a pointer
 *   * Return: void
 *    **/
void reset_to_98(int *n);
/**
 *  * swap_int - function that swaps the values of two integers
 *   * @a: integer
 *    * @b: integer 2
 *     * Return: void
 *      **/
void swap_int(int *a, int *b);
/**
 *  * _strlen - function that returns the length of a string
 *   * @s: the string
 *    * Return: the lenght of a string
 *     **/
int _strlen(char *s);
/**
 *  * _puts - function that prints a string to stdout
 *   * @str: the string
 *    * Return: void
 *     **/
void _puts(char *str);
/**
 *  * print_rev - function that prints a string, in reverse
 *   * @s: the string
 *    * Return: void
 *     **/
void print_rev(char *s);

#endif
