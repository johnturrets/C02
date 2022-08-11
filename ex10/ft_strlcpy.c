#include <stdio.h>
#include <string.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
// size is size of dest
// copies from src to dest till maximum of size - 1
// if src is null-terminated before size -1, stop there.
// at the end, null-terminate dest and return size of dest
    int i = 0;
   
    if (size > 0)
    {
        while(i < size - 1)
        {
            if (*(src + i))
            {
                *(dest + i) = *(src + i);
            }
            else 
            {
                *(dest + i) = '\0';
                return i;
            }
            i++;
        } // only exit this loop if src size >= dest
// exit with i == size - 1 which is the place of '\0' in dest    
        *(dest + i) = '\0';
    }
    while (*(src + i) != '\0')
    {
        i++;
    }
    return i;
}

int main(void)
{
    char dest[50];
    char dest_2[50];
    char src[] = "this is a fucking string";

    printf("strlcpy: %lu\n", strlcpy(dest_2, src, 50));
    printf("dest: %s\n", dest_2);

    printf("ft_strlcpy: %u\n", ft_strlcpy(dest, src, 50));
    printf("dest: %s\n", dest);
    
    return 0;
}
