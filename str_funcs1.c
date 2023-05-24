#include "shell.h"

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
/**
 * _strlen -> it Returns the length of a string.
 * @s: is  A pointer to the characters string.
 *
 * Return: length of the character string.
 */
int _strlen(const char *s)
{
	int length = 0;

	if (!s)
		return (length);
	for (length = 0; s[length]; length++)
		;
	return (length);
}

/**
 * _strcpy -> it Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed by des.
 * @dest: is a Pointer to the destination of copied string.
 * @src: is a Pointer to the src of the source string.
 *
 * Return: Pointer to dest(pointer).
 */
char *_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat -> it Concantenates two strings.
 * @dest: is a Pointer to destination string.
 * @src: is a Pointer to source string.
 *
 * Return: a Pointer to destination string.
 */
char *_strcat(char *dest, const char *src)
{
	char *destTemp;
	const char *srcTemp;

	destTemp = dest;
	srcTemp =  src;

	while (*destTemp != '\0')
		destTemp++;

	while (*srcTemp != '\0')
		*destTemp++ = *srcTemp++;
	*destTemp = '\0';
	return (dest);
}
/**
 * _strncat -> it Concantenates two strings where n number
 *            of bytes are copied from source.
 * @dest: is a Pointer to destination string.
 * @src: is a Pointer to source string.
 * @n: \ copy n bytes from src.
 *
 * Return: Pointer to destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = _strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
