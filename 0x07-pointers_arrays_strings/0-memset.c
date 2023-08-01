#include <stddef.h>
#include "main.h"

void *my_memset(void *s, int c, size_t n)
{
	if (s == NULL)
	{
		return NULL;
	}
    unsigned char *p = s;
    unsigned char value = (unsigned char);

    for (size_t i = 0; i < n; i++)
    {
	    p[i] = value;
    }

	return s;
}
