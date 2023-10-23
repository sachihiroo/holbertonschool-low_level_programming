/**
 * swap_int - check the code
 * @a: pointer
 * @b: pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
