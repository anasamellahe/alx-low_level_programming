#include "main.h"
#include <string.h>
/**
 * _strcat -  appends the src string to the dest string
 * @dest: the string pointedto by 'dest'
 * @src: the string pointedto by 'src'
 * Return: a pointer  to  the  resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	unsigned int len;

	i = 0;
	len = strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
