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
	return (*format);
}
