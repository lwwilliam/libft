#include "libft.h"

char *strlcat ( char *dest, const char *src, size_t nb)
{
    size_t x;
    size_t y;

    x = 0;
    y = 0;
    while (dest[x] != '\0')
    {
        x++;
    }
    while (src[y]!= '\0' && y < nb)
    {
        dest[x] = src[y];
        y++;
        x++;
    }
    dest[x] = '\0';
    return (dest);
}