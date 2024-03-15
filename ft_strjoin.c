#include <unistd.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t string1_len = ft_strlen(s1);
    size_t string2_len = ft_strlen(s2);

    char *dest = (char *) malloc (string1_len + string2_len + 1);
    if (!dest)
    {
        return (0);
    }
   ft_memcpy(dest, s1, string1_len); // here we are copying the memory of the first
   // string to destination (exactly string_len bytes)
   ft_memcpy(&dest[string1_len] /*or dest + string1_len*/, s2, string2_len + 1); // here we are copying the memory 
   // of string2 to &dest[string1_len] plus 1 is because we need the space for null terminator 
}
