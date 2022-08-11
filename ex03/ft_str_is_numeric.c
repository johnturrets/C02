int ft_str_is_alpha(char *str)
{
    if (str)
    {
        while(str)
        {
            if (*str >= '0' && *str <= '9');
            else return 0;
            str++;
        }
        return 1;
    }
}
