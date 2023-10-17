#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - structre
 * @cho: format option
 * @fun: function pointer
 */
typedef struct format
{
	char *cho;
	int (*fun)(va_list, int *);
} form;

int _null(va_list args, int *posi);
int _char(va_list args, int *posi);
int _string(va_list args, int *posi);
int _int(va_list args, int *posi);
int _bin(va_list args, int *posi);
int (*get_op_func(char co))(va_list args, int *posi);
int _printf(const char *format, ...);

#endif
