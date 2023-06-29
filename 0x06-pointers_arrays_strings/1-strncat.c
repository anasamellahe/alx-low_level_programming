#include "main.h"
#include <string.h>
/**
 * _strncat -  appends n bytes from src string to the dest string
 * @dest: the string pointedto by 'dest'
 * @src: the string pointedto by 'src'
 * @n: number of  bytes from src
 * Return: a pointer  to  the  resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	unsigned int len;

	i = 0;
	len = strlen(dest);
	while (src[i] && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
