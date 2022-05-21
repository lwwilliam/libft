#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t len)
{
    size_t x;
    char *d;
    char *s;

    x = 0;
    d = (char *)dest;
    s = (char *)src;
    while (x < len)
    {
        d[x] = s[x];
        x++;
    }
    return(dest);
}