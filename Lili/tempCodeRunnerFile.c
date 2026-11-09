#include <unistd.h>
#include <stdio.h>
/*char    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_alphabet(void)
{
    int c;

    c = 'a';
    while (c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
}
int main(void)
{
    ft_print_alphabet();
    return(0);
}*/

/*char    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_numbers(void)
{
    int c;

    c = '0';
    while(c <= '9')
    {
        ft_putchar(c);
        c++;
    }
}
int main(void)
{
    ft_print_numbers();
    return (0);
}*/
/*char    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_is_negative(int n)
{
    if(n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}
int main(void)
{
    ft_is_negative(-5);
    ft_is_negative(0);
    ft_is_negative(5);
    return (0);
}*/
/*void    ft_ft(int *nbr)
{
    *nbr = 42;
}
int main(void)
{
    int nbr;

    nbr = 0;
    ft_ft(&nbr);
    printf("%d", nbr);
    return (0);
}*/

/*void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int a;
    int b;

    a = 10;
    b = 5;
    printf("Antes: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("Depois: a = %d, b = %d\n", a, b);
    return (0);
}*/
/*void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 3;
    ft_div_mod(a, b, &div, &mod);
    printf("div : %d / %d\n", a, b, div);
    printf("mod : %d %% %d\n", a, b, mod);
    return (0);
}*/
/*int ft_iterative_factorial(int nb)
{
    int result;

    if (nb < 0)
        return (0);
    result = 1;
    while (nb > 1)
    {
        result *= nb;
        nb--;
    }
    return (result);
}
int main(void)
{
    printf("%d\n", ft_iterative_factorial(5));
    return (0);
}*/
/*int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}
int main(void)
{
    printf("%d\n", ft_recursive_factorial(5));
    return (0);
}*/
/*int ft_sqrt(int nb)
{
    int    i;

    if (nb <= 0)
        return (0);
    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return ((int)i);
        i++;
    }
    return (0);
}
int main(void)
{
    printf("%d\n", ft_sqrt(16));   
    printf("%d\n", ft_sqrt(25));   
    printf("%d\n", ft_sqrt(10));   
    printf("%d\n", ft_sqrt(1));   
    printf("%d\n", ft_sqrt(0));   
    printf("%d\n", ft_sqrt(-4));   
    return (0);
}*/
/*char    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
int main(void)
{
    ft_putstr("Liliana\n");
    return (0);
}*/
/*int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int main(void)
{
    printf("%d\n", ft_strlen("Liliana"));   
    printf("%d\n", ft_strlen(""));         
    return (0);
}*/
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}
int main(void)
{
    printf("%d\n", ft_strcmp("abc", "abc")); 
    printf("%d\n", ft_strcmp("abc", "abd"));  
    printf("%d\n", ft_strcmp("abd", "abc"));  
    printf("%d\n", ft_strcmp("abc", "ab"));    
    return (0);
}