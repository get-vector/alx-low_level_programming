#include <stdio.h>

/**
*main - entry
*Description:putchars
*Return:gets 0
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
