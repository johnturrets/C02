#include <stdio.h>

int is_alnum(char c)
{
    if (c >= 'a' && c <= 'z') return 1;
    if (c >= 'A' && c <= 'Z') return 1;
    if (c >= '0' && c <= '9') return 1;
    return 0;
}

int is_lower(char c)
{
    if (c >= 'a' && c <= 'z') return 1;
    return 0;
}

char *ft_strcapitalize(char *str)
{
    char *start = str;
    int i = 0;
    int nextCap = 1;
    
    while(str[i] != '\0')
    {   
        if (!is_alnum(str[i])) 
        {
            nextCap = 1;
        }
        else
        {
            if (nextCap && is_lower(str[i]))
            {
                str[i] = str[i] - 32; // 32 is diff between 'A' and 'a'
            }
            nextCap = 0;
        }
        i++;
    }
    return start;
}

int main()
{
    char s[] = "         oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    char *p = ft_strcapitalize(s);
    printf("%s\n", p);
    return 0;
}
