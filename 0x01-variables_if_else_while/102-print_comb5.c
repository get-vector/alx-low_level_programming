#include <stdio.h>

short upper(short);

short lower(short);

/**
*main - entry
*Description:putchars
*Return:gets 0
*/

int main(void)
{
	short i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(upper(i));
			putchar(lower(i));
			putchar(' ');
			putchar(upper(j));
			putchar(lower(j));
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

/**
 * upper - get alphabet for first digit
 * @n: input number
 * Description: get value
 * Return: alphet short
 */
short upper(short n)
{
	return ('0' + (short)(n / 10));
}


/**
 *  lower - get alphabet for second digit
 * @n: input number
 * Description: get value
 * Return: alphet short
 */
short lower(short n)
{
	return ('0' + (n % 10));
}
