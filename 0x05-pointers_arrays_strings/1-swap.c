
/**
 * swap_int - for swapping
 * @a: first value
 * @b: second value
 * Description: for actually changing value to each other
 */

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
