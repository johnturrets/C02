int ft_str_is_alpha(char *str)
{   
    if (str)
    {
        while(str != '\0')
        {
            if (*str >= 'a' && *str <= 'z');
            else if (*str >= 'A' && *str <= 'z');
            else return (0);
            str++;
        }
    }
    return (1);
}
