#include <unistd.h>


void    ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
void    char_to_hex(char *hex, char c)
{
    if (c / 16 < 10)
        hex[0] = '0' + c / 16;
    else
        hex[0] = 'a' + (c % 16) - 10;

    if (c % 16 < 10)
        hex[1] = '0' + (c % 16);
    else
        hex[1] = 'a' + (c % 16) - 10;

}*/

void    char_to_hex(char *hex, char c)
{
    hex[0] = '0' + c / 16;

    if (c % 16 < 10)
        hex[1] = '0' + (c % 16);
    else
        hex[1] = 'a' + (c % 16) - 10;
}


void ft_putstr_non_printable(char *str)
{
    char hex[2];
    while(*str != '\0')
    {
        if (*str >= ' ' && *str <= '~') 
            ft_putchar(*str);
        else 
        {
            char_to_hex(hex, *str);
            ft_putchar('\\');
            ft_putchar(hex[0]);
            ft_putchar(hex[1]);
        }
        str++;
    }
}

int main()
{
    ft_putstr_non_printable("Oi\nvoce esta bem?");
    return 0;
}
