#include <stdio.h>
/**
*main - Entry point.
*
*a program that prints all the numbers of base 16 in lowercase.
*
*Return: Always (Success)
*/
int main(void)
{
char ch;
char i = 'a';

for (ch = '0' ;	ch <= '9' ; ch++)
{
putchar(ch);
}
for (i = 'a' ; i <= 'f' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
