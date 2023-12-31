#include "main.h"
/**
 * print_string - function that prints a string
 * @s: the variadic argument from the printf function
 * Return: amount of characters printed
**/
int print_string(va_list s)
{
	char *string;
	int i;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}
/**
 *print_char - function that prints a character
 *@c: the variadic argument from the printf function
 *Return: amount of characters printed (one).
**/
int print_char(va_list c)
{
	char character = (char) va_arg(c, int);

	_putchar (character);

	return (1);
}
