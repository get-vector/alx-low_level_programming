#include <string.h>


/**
 * _strncat - copy string
 * @dest: Destination
 * @src: Source
 * @n: Number if bytes
 * Description: just copy n bytes
 * Return: returns dest
 */
 

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
