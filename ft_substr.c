/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include <unistd.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i; 
    size_t len_of_sub;
    char *substring;

    i = 0; 
    len_of_sub = 0;  
    while(s[len_of_sub] != '\0'&& len_of_sub < len) //    Finding the length of the substring
    {
        len_of_sub++;
    }
        // Allocating memory for the substring (+1 for null terminator)
    substring = (char *)malloc((len_of_sub + 1) * sizeof(char));
    if(substring == NULL)
        return NULL;
        // Copying characters to the substring starting from 'start' 
    while(i = 0 && i < len_of_sub && i++)
    {
        substring[i] = s[start + 1];
    }
        // Adding null terminator
    substring[i] = '\0';
    return substring;
}
