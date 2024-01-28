#include "main.h"

int string_printf(va_list arg)
{
	char *str;
	int len = 0;

	str = va_arg(arg, char *);
	if (!str)
	{
		str = "(null)";
		return (_puts(str));
	}
	else
		len = _puts(str);

	return (len);
}

int printf_ff(va_list arg)
{
	char *ayoub = va_arg(arg, char *);
	int len = 0;
	int i;

	if (!ayoub)
	{
		ayoub = "(null)";
		return (_puts(ayoub));
	}
	for (i = 0; ayoub[i] != '\0'; i++)
	{
		if (ayoub[i] < 32 || ayoub[i] >= 127)
		{
			len += _putchar('\\');
			len += _putchar('x');
			len += _put_HEX(ayoub[i]);
		}
		else
		{
			len += _putchar(ayoub[i]);
		}
	}
	return (len);
}
