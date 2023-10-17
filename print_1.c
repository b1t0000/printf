#include "main.h"
/**
 * _printf - printf
 * @format: format
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int printedchar = 0, posi = 0;
	va_list args;

	va_start(args, format);
	while (format[posi] != '\0')
	{
		if (format[posi] != '%')
			write(1, &format[posi], 1);
		if (format[posi] == '%')
		{
			if (format[posi + 1] == '%')
			{
				write(1, &format[posi + 1], 1);
				posi++;
				printedchar--;
			}
			else
			{
				printedchar += get_op_func(format[posi + 1])(args, &posi);
			}
		}
		posi++;
	}
	return (printedchar + posi);
}
