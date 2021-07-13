#include <unistd.h>

/**
 *_putchar - writes the charater c
 *@c: the charater to be printed
 *Return: on success print 1
 *on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
