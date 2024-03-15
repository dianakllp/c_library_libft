#include <unistd.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;

    if(*needle == 0)
    {
        return ((char *) haystack);
    }
    if(len == 0)
    {
        return (0);
    }
    while(haystack[i] != '\0' && i < len)
    {
        j = 0; 
        while(i + j < len && haystack[i + j] == needle[j] && needle[j] != '\0')
        {
            if (needle[j + 1] == '\0')
            {
                return ((char *)haystack + i);
            }
            j++;
        }
        i++;
    }
    return (0);
}