
#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>

#include <stdio.h>

#include <unistd.h>


#define UNUSED(x) (void)(x)

#define BUFF_SIZE 1024


/* FLAGS */

#define F_MINUS 1

#define F_PLUS 2

#define F_ZERO 4

#define F_HASH 8

#define F_SPACE 16


/* SIZES */

#define S_LONG 2

#define S_SHORT 1


/**

 * struct fmt - Struct op

 *

 * @fmt: The format.

 * @fn: The function associated.

 */

struct fmt

{

        char fmt;

        int (*fn)(va_list, char[], int, int, int, int);

};



/**

 * typedef struct fmt fmt_t - Struct op

 *

 * @fmt: The format.

 * @fm_t: The function associated.

 */

typedef struct fmt fmt_t;


int _printf(const char *format, ...);

int handleprint(const char *fmt, int *i,

va_list list, char buffer[], int flags, int width, int precision, int size);


/****************** FUNCTIONS ******************/


/* Funtions to print chars and strings */

int printchar(va_list types, char buffer[],

        int flags, int width, int precision, int size);

int printstring(va_list types, char buffer[],

        int flags, int width, int precision, int size);

int printpercent(va_list types, char buffer[],

        int flags, int width, int precision, int size);


/* Functions to print numbers */

int printint(va_list types, char buffer[],

        int flags, int width, int precision, int size);

int printbinary(va_list types, char buffer[],

        int flags, int width, int precision, int size);

int printunsigned(va_list types, char buffer[],

        int flags, int width, int precision, int size);

int printoctal(va_list types, char buffer[],

        int flags, int width, int precision, int size);

int printhexadecimal(va_list types, char buffer[],

        int flags, int width, int precision, int size);

int printhexaupper(va_list types, char buffer[],

        int flags, int width, int precision, int size);


int printhexa(va_list types, char map_to[],

char buffer[], int flags, char flag_ch, int width, int precision, int size);


/* Function to print non printable characters */

int printnonprintable(va_list types, char buffer[],

        int flags, int width, int precision, int size);


/* Funcion to print memory address */

int printpointer(va_list types, char buffer[],

        int flags, int width, int precision, int size);


/* Funciotns to handle other specifiers */

int getflags(const char *format, int *i);

int getwidth(const char *format, int *i, va_list list);

int getprecision(const char *format, int *i, va_list list);

int getsize(const char *format, int *i);


/*Function to print string in reverse*/

int printreverse(va_list types, char buffer[],

        int flags, int width, int precision, int size);


/*Function to print a string in rot 13*/

int printrot13string(va_list types, char buffer[],

        int flags, int width, int precision, int size);


/* width handler */

int handlewritechar(char c, char buffer[],

        int flags, int width, int precision, int size);

int writenumber(int is_positive, int ind, char buffer[],

        int flags, int width, int precision, int size);

int writenum(int ind, char bff[], int flags, int width, int precision,

        int length, char padd, char extra_c);

int writepointer(char buffer[], int ind, int length,

        int width, int flags, char padd, char extra_c, int padd_start);


int writeunsgnd(int is_negative, int ind,

char buffer[],

        int flags, int width, int precision, int size);


/****************** UTILS ******************/

int isprintable(char);

int appendhexacode(char, char[], int);

int isdigit(char);


long int convertsizenumber(long int num, int size);

long int convertsizeunsgnd(unsigned long int num, int size);


#endif /* MAIN_H */
