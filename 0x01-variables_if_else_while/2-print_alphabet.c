#include <stdio.h>

/**
*main - entry
*Description:putchars
*Return:gets 0
*/

int main(void)
{
	char i;

	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
