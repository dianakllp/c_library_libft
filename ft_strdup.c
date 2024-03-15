#include <unistd.h>
#include <stdio.h>

char *strdup(const char *str)
{
    size_t str_len;
    char *dest;

    str_len = ft_strlen(str); 
    dest = (char *) malloc(str_len + 1); //here we are allocating the memory for duplicated string
    if (!dest) //here we are checking if malloc found the memory. If not - null
    {
        return (0); 
    }
    int i; 

    i = 0; 
    while(i < str_len) 
    {
        dest[i] = str[i]; //here we are copying one memory to other 
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
