#include "main.h"

/**
 * _islower - This function checks if it's lower case
 * @c: character to  check.
 * Return: true if it's alpha
 */
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
return (0);
}
