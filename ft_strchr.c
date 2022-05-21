char *ft_strchr(const char *str, int y)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        if (str[x] == y)
        {
            return((char *)str + x);
        }
        x++;
    }
    return(0);
}