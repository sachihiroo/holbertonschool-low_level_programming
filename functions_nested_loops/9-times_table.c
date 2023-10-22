#include "main.h"
/*more headers goes there*/

/**
 * times_table - print 9.
 */
void times_table(void)
{
  int i;
  int j;
  int x;

  for (i = 0; i < 10; i++)
    {
     for (j = 0; j < 10; j++)
	{
	  x = i * j;
	  if (x == 0 && j == 0)
	    {
	      _putchar(x + '0');
	    }
	  else
	    {
	      if (x < 10)
		{
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		  _putchar(x + '0');
		}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
