#include "stdlib.h"

size_t strlen (const char *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
        x++;
    return(str);
}
