#include <string.h>

/**
 *  _strcat - a concentation of string
 *  @dest: dest
 *  @src: source
 *  Description: Join string together
 *  Return: Get another string as output
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}
