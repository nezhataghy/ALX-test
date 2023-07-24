#include "main.h"


int _printf(const char *format, ...)
{
	
	
printhandler func_arr[] = {
		{'c', print_a_char}, {'s', print_a_string}, {'%', print_percent}, {'\0', NULL}
	};

	unsigned int i, j, len = 0;
	va_list args;
	char *ptr;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			len += print_char(format[i]);
			i++;
		}
		if (i++ == strlen(format) - 1)
			return (-1);
		for (j = 0; func_arr[j].s != '\0'; j++)
		{
			if (format[i] == func_arr[j].s)
			{
				ptr = func_arr[j].func_p;
				len += ptr(args);
				break;
			}
		}



	}
	va_end(args);
	return (len);
}
