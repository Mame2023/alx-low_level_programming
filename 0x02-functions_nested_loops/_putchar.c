#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the charactor c to stdout
 * @c: the charactor to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
        return (write(1, $c, 1));
}
