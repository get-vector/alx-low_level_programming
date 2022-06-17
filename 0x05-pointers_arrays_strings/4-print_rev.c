#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - print string include a newline
 * @s: string to print
 * Description: Used to print to screen
 */


void print_rev(char *s)
{
	int lstr = strlen(s);
	char *revs = (char*)malloc(lstr);
	char *buffer = revs;
	char *end = s + lstr - 1;
	for (; end >= s; end--, buffer++)
		*buffer = *end;
	*buffer = '\0';
	puts(revs);
}
