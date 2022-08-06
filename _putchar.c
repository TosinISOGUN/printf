#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: character parameter
 * Return: 1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
