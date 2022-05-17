int ft_tolower(int x)
{
    if(x >= 'A' && x <= 'Z')
    {
        x += 32;
    }
    return (x);
}