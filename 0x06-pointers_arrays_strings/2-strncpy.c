#include <string.h>


/**
 * _strncpy - copy string
 * @dest: Destination
 * @src: Source
 * @n: Number if bytes
 * Description: just copy n bytes
 * Return: returns dest
 */
 

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
