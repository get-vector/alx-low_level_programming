
/**
 *  _strcat - a concentation of string
 *  @dest: dest
 *  @src: source
 *  Description: Join string together
 *  Return: Get another string as output
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest; 
	while(*p++!='\0');
	p--;
	while((*p++=*src++) != '\0');
	return (dest);
}
