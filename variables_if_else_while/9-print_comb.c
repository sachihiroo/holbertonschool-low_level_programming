#include <stdio.h>
/**
*main - Entry point
*
*a program that prints all possible
*combinations of single-digit numbers.
*
*Return: Always (Success)
*/

int main(void)
{
int x = 0;

while (x < 10)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
