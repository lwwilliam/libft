#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    size_t x;
    unsigned char *p;

    x = 0;
    p = (unsigned char *)str;
    while (x < n)
    {
        p[x] = (unsigned char)c;
        x++;
    }
    return (str);
}