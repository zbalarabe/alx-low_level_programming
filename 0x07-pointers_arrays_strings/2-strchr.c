include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return: c if found and NULL if not
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
