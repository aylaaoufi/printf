#include "main.h"

int printf_a(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer}, {"%u", print_unsigned},
							{"%b", print_binary}, {"%o", print_octal}, {"%S", print_S},
							{"%x", print_hex}, {"%X", print_HEX}, {"%p", print_address},
							{"%r", print_rev}, {"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	len = printf_b(format, arg, format_redear);

	return (len)
}
int printf_b(const char *format, va_list arg, struct formats *format_redear)
{
	int i = -1, j = 0, len = 0, k;

	for (; format[++i]; j = 0, k = 0)
	{
		if (format[i] == 37)
		{
			if (format[i + 1] == 32 || format[i + 1] == 9)
				i++;
			if (format[i + 1] == 37)
			{
				i++, len += _putchar(format[i]);
				continue;
			}
			if (format[i + 1] == '+' || format[i + 1] == '#')
			{
				if (format[i + 1] == '#')
					len += hashtag_flag(arg, format + i), i += 2;
				else
					len += plus_flag(arg, format + i), i += 2;
				continue;
			}
			while (format_redear[j].f)
			{
				if (format[i + 1] == format_redear[j].f[1])
				{
					len += format_redear[j].print(arg), i++, k = 1;
					break;
				}
				j++;
			}
			if (!k)
				len += _putchar(format[i]);
		}
		else
			len += _putchar(format[i]);
	}
	va_end(arg);
	return (len);
}
