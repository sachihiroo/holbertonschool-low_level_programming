#include "main.h"
/**
*_islower - check the code
*
* description: a function that checks for lowercase character.
*@c : int
* Return: Always 0
*/

int _islower(int c)
{
if ((c >= 97) && (c <= 122))
	return (1);

else
	return (0);
}
