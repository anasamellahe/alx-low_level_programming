#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @str:  the string pointedto by 'str'
 * Return:  the number of bytes in the stringpointed to by str.
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * _strncat -  appends n bytes from src string to the dest string
 * @dest: the string pointedto by 'dest'
 * @src: the string pointedto by 'src'
 * @n: number of  bytes from src
 * Return: a pointer  to  the  resulting string dest.i
 */

char *_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int len;
	unsigned int i;

	i = 0;
	len = _strlen(dest);
	while (i < n)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/**
 * string_nconcat -  concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: the first n bytes of s2
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1) + n;
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	p[0] = '\0';
	_strncat(p, s1, _strlen(s1));
	_strncat(p, s2, n);
	return (p);
}

