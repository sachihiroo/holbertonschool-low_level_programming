#include <stdio.h>
/**
*main - Entry point.
*
*Write a program that prints the alphabet in lowercase
*without e and q
*
*Return: Always (Success)
*/
int main(void)
{
char ch;

for (ch = 'a'; ch -1 < 'z' ; ++ch)
{
if ((i != 'q') && (i != 'e'))
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
