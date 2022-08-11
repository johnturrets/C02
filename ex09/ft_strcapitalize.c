#include <stdio.h>

int is_alnum(char c)
{
    if (c >= 'a' && c <= 'z') return 1;
    if (c >= 'A' && c <= 'Z') return 1;
    if (c >= '0' && c <= '9') return 1;
    return 0;
}

char *ft_strcapitalize(char *str)
{
    char *s;
    char *sptr = &s;

    int to_cap = 1;
    int diff = 'a' - 'A';

    if (str)
    {
        while(*str != '\0')
        {
            if (is_alnum(*str) == 0) 
                to_cap =;
            else if (*str >= 'a' && *str <= 'z')
            {
                if (to_cap == 1)
                {
                    *sptr++ = *str++ - diff;
                    to_cap = 0;
                }
            }
            sptr++;
            str++;
        }
        return s;
    }
    return str;
}

int main()
{
    char *s = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    char *p = str_capi
printf("%s\n", s);
    return 0;
}
