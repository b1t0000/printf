#include "main.h"
/**
 * _string - print string
 * @args: string
 * @posi: position
 * Return: no of printed string
 */
int _string(va_list args, int *posi)
{
	int i = 0;
	char *stri;

	stri = va_arg(args, char*);

	while (stri[i] != '\0')
	{
		write(1, &stri[i], 1);
		i++;
	}
	*posi += 1;
	return (i);
}
/**
 * _char - print character
 * @args: character
 * @posi: position
 * Return: printed char
 */
int _char(va_list args, int *posi)
{
	char x;

	x = va_arg(args, int);
	write(1, &x, 1);
	*posi += 1;
	return (1);
}
/**
 * _null - null
 * @args: args
 * @posi: position
 * Return: 0;
 */
int _null(va_list args, int *posi)
{
	char l = '%';
	(void)args;

	write(1, &l, 1);
	*posi += 0;
	return (0);
}
