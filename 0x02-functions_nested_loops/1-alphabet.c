#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Description: This function prints _putchar
 * Return: Always 0
 */
int print_alphabet(void)
{
char a;
for(a='a'; a<='z'; a++)
{
    _putchar(a);
}
_putchar('\n');
}
