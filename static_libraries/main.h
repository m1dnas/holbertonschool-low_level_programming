#ifndef MAIN_H
#define MAIN_H

/**
 *  * reset_to_98 - function that takes a pointer and updates the value it p
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
 *  * puts2 - prints every other character of a string, starting with 
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
 *   * @dest: the pointer to the destination array, which shou
 *    * @src: the string to be appended
 *     * Return: a pointer to the resulting string dest
 *      **/
char *_strcat(char *dest, char *src);
/** _strncat - concatenates two strings
 *  * @dest: the pointer to the destination array, which should con
 *   * @src: the string to be appended
 *    * @n: most 'n' bytes from src
 *     * Return: string dest
 *      **/
char *_strncat(char *dest, char *src, int n);
/**
 *  * _strncpy - copies a string
 *   * @dest: the pointer to the destination array where the con
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
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
int _strlen(char *s);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int i);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_times_table(int n);

#endif
