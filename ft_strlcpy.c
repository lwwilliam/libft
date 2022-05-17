#include "libft.h"

char *strncpy ( char *dest, const char *src, size_t y)
{
    size_t x;

    x = 0;
    while (src[x]!= '\0' && x > y)
    {
        dest[x] = src[x];
        x++;
    }
    while (x < y)
    {
        dest[x] = '\0';
        x++;
    }
    return (dest);
}