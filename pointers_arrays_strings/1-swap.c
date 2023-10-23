/**
 * swap_int - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
