#include <unistd.h>
/**
 * _putchar - writes char c to standout output
 * @c - char to be printed
 * return on success(0)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
