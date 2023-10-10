#include "main.h"

/**
 * _islower - This function checks if it's lower case
 * @c: character to  check.
 * return: true if it's lower
 */
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
return (0);
}
