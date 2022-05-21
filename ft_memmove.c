#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t x;
    char *d;
    char *s;
    
    x = 0;
    d = (char *)dest;
    s = (char *)src;
    
    while(x < n)
    {
        d[x] = s[x];
        x++;
    }
    return(dest);
}