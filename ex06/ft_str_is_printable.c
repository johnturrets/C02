int ft_str_is_printable(char *str)
{
    if (str)
    {
        while(*str != '\0')
        {
            if (*str >= ' ' && *str <= '~');
            else return 0;
            str++;
        }
    }
    return 1;
}
