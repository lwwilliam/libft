char *ft_strrchr ( const char *str, int y)
{
    int lw;

    lw = 0;
    while (str[lw] != '\0')
    {
        lw++;
    }
    while (*str)
    {
        if (str[lw] == y)
        {
            return((char *)str + lw);
        }
        lw--;
    }
    return(0);
}