#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t x;
    char *d;
    char b;

    x = 0;
    d = (char *)str;
    b = (char)c;
    while (x < n)
    {
        if(*d == b)
        {
            return(d);
        }
        d++;
        x++;
    }
}