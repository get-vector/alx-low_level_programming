#include <string.h>
/* header file*/

/**
 *  _strncat - a concentation of string
 *  @dest: destination
 *  @src: source
 *  @n: no of byte
 *  Description: Join string together
 *  Return: Get another string as output
*/

char *_strncat(char *dest, char *src, int n)
{
	char *p = strncat(dest, src, n);
	return (dest);
}
