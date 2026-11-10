int ft_isalpha (int a)
{
    if(a >= 'A' && a <= 'Z')
        return(1);
    if(a >= 'a' && a <= 'z')
        return(1);
    return(0);
}