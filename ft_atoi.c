int ft_atoi(const char *str)
{
    int x;
    int neg;
    int num;

    x = 0;
    neg = 1;
    num = 0;
    while (str[x] < 33)
        x++;
    if (str[x] == '-')
    {
        neg = -1;
    }
    x++;
    while (str[x] >= '0' && str[x] <= '9')
    {
        num = num * 10 + str[x] - '0';
        x++;
    }
    return(num * neg);
}