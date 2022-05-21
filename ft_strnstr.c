#include "libft.h"

char *ft_strnstr(const char	*s1, const char *s2, size_t len)
{
    size_t x;
    size_t y;

    x = 0;
    y = 0;
    if (*s2 != '\0')
        return((char *)s1);
    while(s1[x] != '\0' && x < len)
    {
        while(s2[y] == s1[x + y] && x + y < len)
        {
            if (s2[y + 1] == '\0')
                return((char *)s1 + x);
            y++;
        }
        x++;
    }
    return(NULL);
}