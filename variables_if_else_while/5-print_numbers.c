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

for (i = 1; i <= 10; ++i)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
