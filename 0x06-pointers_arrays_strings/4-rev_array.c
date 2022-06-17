/**
 * reverse_array - reverse array
 * @a: array
 * @n: arraay size
 * Description: For reversing array
 */
void reverse_array(int *a, int n)
{
	int q[n];
	int i = 0;

	while (i < n)
	{
		q[i] = *(a + n - i -1);
		i++;
	}

	a = q;
}

