char *ft_strupcase(char *str)
{
    char diff;
    char *start;

    start = str;
    diff = 'a' - 'A';

    if (str)
    {
        while(*str != '\0')
        {
            if (*str >= 'a' && *str <= 'z') *str -= diff;
            str++;
        }
    }
    return start;
}
