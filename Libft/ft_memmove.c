void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *dest_ptr;
    const unsigned char *src_ptr;
    size_t              i;

    dest_ptr = (unsigned char *)dest;
    src_ptr = (const unsigned char *)src;
    if (dest_ptr == src_ptr)
        return (dest);
    if (dest_ptr > src_ptr)
    {
        i = n;
        while (i > 0)
        {
            i--;
            dest_ptr[i] = src_ptr[i];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            dest_ptr[i] = src_ptr[i];
            i++;
        }
    }
    return (dest);
}