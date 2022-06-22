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
/**
 *  * rev_string - function that prints a string, in reverse
 *   * @s: the string
 *    * Return: void
 *     **/
void rev_string(char *s);
/**
 *  * puts2 - prints every other character of a string, starting with the first char
 *   * @str: the string
 *    * Return: void
 *     **/
void puts2(char *str);
/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 **/
void puts_half(char *str);
/**
 *  * print_array - prints n elements of an array of integers
 *   * @a: the string
 *    * @n: the number of elements of the array to be printed
 *     * Return: void
 *      **/
void print_array(int *a, int n);
/**
 *  * *_strcpy - copies the string pointed to by src
 *   * @dest:
 *    * @src:
 *     * Return:
 *      **/
char *_strcpy(char *dest, char *src);
/**
 *  * _strcat - concatenates two strings
 *   * @dest: the pointer to the destination array, which should contain a C string
 *    * @src: the string to be appended
 *     * Return: a pointer to the resulting string dest
 *      **/
char *_strcat(char *dest, char *src);
/** _strncat - concatenates two strings
 *  * @dest: the pointer to the destination array, which should contain a C string
 *   * @src: the string to be appended
 *    * @n: most 'n' bytes from src
 *     * Return: string dest
 *      **/
char *_strncat(char *dest, char *src, int n);
/**
 *  * _strncpy - copies a string
 *   * @dest: the pointer to the destination array where the content is to be copied
 *    * @src: the string to be copied
 *     * @n: the number of characters to be copied from source
 *      * Return: dest
 *       **/
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: if the 1st non-matching char has a lower ascii value in s1 than s2
 *         if the strings are equal
 *         if the 1st non-matching char has a higher ascii value in s1 than s2
 **/
int _strcmp(char *s1, char *s2);
/**
 * reverse_arrray - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: void
 **/
void reverse_array(int *a, int n);
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @j: the string
 * Return: string in uppercase
 **/
char *string_toupper(char *j);
/**
 * cap_string - capitalizes all words of a string
 * @a: the string to return
 * Return: all words capitalized
 **/
char *cap_string(char *a);
/**
 * leet - encodes a string into 1337
 * @s: the string without 1337
 * Return: the string into 1337
 **/
char *leet(char *s);
/**
 *  * _memset - fills memory with a constant byte
 *   * @s: array to set
 *    * @b: value to set it as
 *     * @n: times
 *      * Return: value of s
 *       */
char *_memset(char *s, char b, unsigned int n);
/**
 *  * _memcpy - copies memory area
 *   * @dest: destination to copy to
 *    * @src: source to copy from
 *     * @n: times
 *      * Return: the string value
 *       */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 *  * _strchr - locates a character in string
 *   * @s: string to locate char
 *    * @c: character to find
 *     * Return: character value
 *      */
char *_strchr(char *s, char c);
/**
 *  * _strspn - length of a prefix substring
 *   * @s: string to go through
 *    * @accept: accepted bytes
 *     * Return: unsigned values
 *      */
unsigned int _strspn(char *s, char *accept);
/**
 *  * _strpbrk - searches a string for any of a set of bytes
 *   * @s: string to find stuff
 *    * @accept: accepting arrays
 *     * Return: new value
 *      */
char *_strpbrk(char *s, char *accept);
/**
 *  * _strstr - locates a substring
 *   * @haystack: main C string to be scanned
 *    * @needle: small string to be searched with-in haystack string
 *     * Return: to the begin
 *      */
char *_strstr(char *haystack, char *needle);
/**
 *  * print_chessboard - prints the chessboard
 *   * @a: string
 *    * Return: void
 *     */
void print_chessboard(char (*a)[8]);
/**
 *  * print_diagsums - prints the sum of the two diagonals
 *   * @a: string
 *    * @size: the size of
 *     * Return: void
 *      */
void print_diagsums(int *a, int size);
int _strlen(char *s);
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
/**
 *  * function that draws a straight line in the terminal
 *   * @n: parameter to draw 'n' times
 *    **/
void print_line(int n);
/**
 *  * print_diagonal - function that draws a diagonal line on the terminal
 *   * @n: number of times the character \ should be printed
 *    **/
void print_diagonal(int n);
/**
 *  * print_square - function that prints a square, followed by a new line.
 *   * @size: is the size of the square
 *    * Return: void
 *     **/
void print_square(int size);
/**
 *  * print_triangle - function that prints a triangle, followed by a new line
 *   * @size: is the size of the triangle
 *    **/
void print_triangle(int size);
/**
 ** _putchar - writes the character c to std
 ** @c: parameter to compare
 **/
int _putchar(char);
/**
 * print_alphabet - print the alphabet
 *
 **/
void print_alphabet(void);
/**
 * print_alphabet_x10 - print the alphabet x10
 *
 **/
void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase character
 * @c: parameter to check
 **/
int _islower(int c);
/**
 * _isalpha - checks for alphabetic character
 * @c: parameter to check
 **/
int _isalpha(int c);
/**
 * print_sign - prints the sign of a number
 * @n: parameter to sign a number
 **/
int print_sign(int n);
/**
 * _abs - computes the absolute value of an integer
 * @i: parameter to compute the absolute value
 **/
int _abs(int i);
/**
 ** print_last_digit - prints the last digit of a number
 ** @n: parameter to give a number
 ***/
int print_last_digit(int n);
/**
 * jack_bauer - prints every M of the day, starting from 00 to 23.59
 *
 **/
void jack_bauer(void);
/**
 * times_table - print the 9 times table, starting with 0
 *
 **/
void times_table(void);
/**
 *  * add - adds two integers
 *   * @a: first integer
 *    * @b: second integer
 *     * Return: the result
 *      **/
int add(int a, int b);
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 **/
void print_to_98(int n);
/**
 *  * print_times_table - prints the n times table
 *   * @n: parameter to print the times table
 *    *
 *     **/
void print_times_table(int n);

#endif
