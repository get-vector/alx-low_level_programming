#include <string.h>

/**
 *  _strncat - a concentation of string
 *  @:
 *  @:
 *  Description: Join string together
 *  Return: Get another string as output
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = strncat(dest, src, n);
	return (p);
}
