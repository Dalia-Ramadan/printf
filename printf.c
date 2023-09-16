#include"main.h"
#include<stdio.h>
/**
 * _printf-function for print
 * @format: is a character string.
 */
int _printf(const char *format, ...)
{
	printf ("%c%c\n ", 'a', 96);
	printf ("%s\n", "dalia");
	printf ("%%");
	printf ("%i", 1);
	printf ("%b", 5);
	printf ("%o", 10);
	return (*format);
}
