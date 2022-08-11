char *ft_strupcase(char *str)
{
    short diff = 'a' - 'A';
    char *start = str;
    if (str)
    {
        while(*str != '\0')
        {
            if (*str >= 'A' && *str <= 'Z') *str += diff;
            str++;
        }
    }
    return start;
}
