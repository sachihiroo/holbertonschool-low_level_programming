#include "main.h"
#include <stdio.h>
/**
*times_table - print 9.
*/
void times_table(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i * (j + 1) < 10)
{
if (j != 9)
{
printf("%d,  ", i * j);
}
else
{
printf("%d,  ", i * j);
}
else
{
printf("%d", i* j);
}
}
}
_putchar('\n');
}
}
