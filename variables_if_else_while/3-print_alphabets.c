#include <stdio.h>
/**
*main - Entry point.
*
*Write a program that prints the alphabet in lowercase.
*
*Return: Always (Success)
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z' ; ch++)
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
