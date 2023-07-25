#include "main.h"
/**
 * print_u_int - Prints an unsigned number
 * @in: arg input
 * Return: The amount of numbers printed
 */
int print_u_int(va_list in)
{
	unsigned int n, num;
	int l, diviseur = 1;

	n = va_arg(in, unsigned int);
	num = n;
	l = 0;

	while (num / diviseur > 9)
		diviseur *= 10;

	while (diviseur != 0)
	{
		l += _putchar('0' + num / diviseur);
		num %= diviseur;
		diviseur /= 10;
	}
	return (l);
}

/**
 * print_octal - Prints a number in octal base
 * @in: List args
 * Return: Number of char printed
 */
int print_octal(va_list in)
{
	unsigned int num;
	int l, i;
	char *octal_num, *inverse;

	num = va_arg(in, unsigned int);

	if (num < 1)
		return (-1);
	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
		num = num / 8;
	l = i;

	octal_num = malloc(sizeof(char) * l + 1);
	if (octal_num == NULL)
		return (-1);
	for (l = 0; num > 0; l++)
	{
		octal_num[l] = (num % 8) + 48;
		num = num / 8;
	}
	octal_num[l] = '\0';
	inverse = rev_string(octal_num);
	if (inverse == NULL)
		return (-1);

	for (i = 0; inverse[i] != '\0'; i++)
		_putchar(inverse[i]);

	free(octal_num);
	free(inverse);
	return (l);
}


/**
 * rev_string - prints a string in rev
 * @s: input
 *
*/

char *rev_string(char *s)
{
int l = 0, i = 0;
char c;
char *ptr;

while (s[l])
{
	l++;
}
l--;
ptr = malloc(sizeof(char) * l + 1);
if (ptr == NULL)
	return (NULL);

_memcpy(ptr, s, l);
for (i = 0; i < l; i++, l-- )
{
	c = ptr[l - 1];
	ptr[l - 1] = ptr[l];
	ptr[l] = c;
	i++;
}
return (s);
}

/**
 * _memcpy - copies a specified number of bytes from
 * one memory location to another
 * @n: number of bytes
 * @src: from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int comp = 0;

	while (comp < n)
	{
		dest[comp] = src[comp];
		comp++;
	}

	return (dest);
}
