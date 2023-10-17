#include "main.h"
/**
 * print_int - print int
 * @num: integer
 * @printed: number of digits
 */
void print_int(int num, int *printed)
{
	char po;
	int a, pp, x;

	a = num;
	if (num > 9)
	{
		x = num / 10;
		print_int(x, printed);
	}
	pp = a % 10;
	po = pp + '0';
	write(1, &po, 1);
	*printed += 1;
}
/**
 * _int - print integers
 * @args: number
 * @posi: position
 * Return: number of printed digit
 */
int _int(va_list args, int *posi)
{
	int printed = 0, p;
	char c = '-';

	p = va_arg(args, int);
	if (p < 0)
	{
		write(1, &c, 1);
		p *= -1;
		printed++;
	}
	print_int(p, &printed);
	*posi += 1;
	return (printed);
}
/**
 * _bin - decimal to binary
 * @args: decimal num
 * @posi: position
 * Return: num of digits
 */
int _bin(va_list args, int *posi)
{
	char b;
	unsigned int n;
	int binar[32], j, i = 0, printed = 0;

	n = va_arg(args, unsigned int);
	while (n > 0)
	{
		binar[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		b = binar[j] + '0';
		write(1, &b, 1);
		printed++;
	}
	*posi += 1;
	return (printed);
}
