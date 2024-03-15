#include <unistd.h>
#include <stdio.h>

void *ft_memchr(const void *str, int character, size_t n)
{
    unsigned char *string = str;
    size_t i;
    i = 0;
    while(string[i] != '\0' && i <= n)
    {
        if(string[i] == character)
        {
            return(string[i]);
        }
        i++;
    }
    return (NULL);
}
