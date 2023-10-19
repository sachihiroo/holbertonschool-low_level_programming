#include <stdio.h>
/**
* main - Entry point.
*
*a program that prints all single digit
*  numbers of base 10
*Return: Always (Success)
*/
int main(void)
{
unsigned int i;

for (i = 0; i <= 9; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
