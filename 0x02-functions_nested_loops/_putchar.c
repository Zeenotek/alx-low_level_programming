#include <unistd.h>
#include "main.h"
/**
* _putchar - Writes a character to the standard output (stdout)
* @c: The character to be written
*
* Return: On succes, returns the numberof characters written.
* On error, -1 is returned.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}
