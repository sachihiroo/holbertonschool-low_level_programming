#include "main.h"
/**
*main - Entry point
*
*print_alphabet - prints the alphabet, in lowercase
*
*Return: Always (Success)
*/
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; ++i)
{
_putchar(i);
}
_putchar('\n');
}
