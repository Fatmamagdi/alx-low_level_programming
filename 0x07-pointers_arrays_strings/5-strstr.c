#include "main.h"

/**
 * _strstr - locates a substring in a string.
 * @haystack: the string to search in.
 * @needle: the substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_iter, *needle_iter;

	while (*haystack)
	{
		haystack_iter = haystack;
		needle_iter = needle;

		while (*needle_iter && (*needle_iter == *haystack_iter))
		{
			needle_iter++;
			haystack_iter++;
		}

		if (!*needle_iter)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
