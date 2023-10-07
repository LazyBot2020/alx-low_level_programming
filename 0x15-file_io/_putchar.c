#include <unistd.h>

/**
 * _putchar - t writes the character c to stdout
 * @c: for the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and err nbr is set appropriately.
 */
int _putchar(char c)
{
       return (write(1, &c, 1));
}
