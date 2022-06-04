#include <stdio.h>

/**
*main - entry
*Description:putchars
*Return:gets 0
*/

int main(void)
{
	short i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
			putchar(',');
	}
	putchar('\n');
	return (0);
}
