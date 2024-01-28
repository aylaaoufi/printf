#include "main.h"

int putcharput(char c)
{
	return (write(1, &c, 1));
}

int puts(char *s)
{
	int i = -1;

	while (s[++i])
		_putchar(s[i]);
	return (i);
}

int reverse_puts(char *str)
{
	int i = 0, len = -1;
	char *arr = str;


	while (arr[++len])
		;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(arr[i]);
	}
	return (len);
}

int putsbb(char c)
{
	int len = 0;

	len += _putchar((c / 16 < 10) ? (c / 16) + '0' : (c / 16) + 55);
	len += _putchar((c % 16 < 10) ? (c % 16) + '0' : (c % 16) + 55);
	return (len);
}
