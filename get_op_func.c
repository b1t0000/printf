#include "main.h"
/**
 * get_op_func - get proper function
 * @co: format specifier
 * Return: number of printed char
 */
int (*get_op_func(char co))(va_list args, int *posi)
{
	form op[] = {
		{"c", _char},
		{"s", _string},
		{"i", _int},
		{"d", _int},
		{"b", _bin},
		{NULL, _null}
	};
	int i = 0;

	while (op[i].cho != NULL && *(op[i].cho) != co)
		i++;
	return (op[i].fun);
}

