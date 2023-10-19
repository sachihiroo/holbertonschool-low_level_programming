#include <stdio.h>
/**
*main - Entry point.
*
*a program that prints the lowercase alphabet in reverse
*
*Return: Always (Success)
*/
int main(void)
{
char ch;

for (ch = 'z' ;	ch <= 'a' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
