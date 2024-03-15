#include <unistd.h>
#include <stdio.h>

static int num_of_sub(char const *string, char character)
{
    int substrings;

    substrings = 0; 
    while(*string)
    {
        if(*string != character)
        {
            substrings++;
            while(*string != character)
                string++;
        }
        string++;
    }
    return (substrings);
}

char **ft_split(char const *s, char c) //  Extract substrings and store them in the array
{
    int i; 
    i = 0;   
    int start; 
    int end;
    char **memory = ft_calloc(num_of_sub(s, c), sizeof(char *));

    while(s[i] != '\0')
    {
        if(s[i] != c)
        {
            start = i;
            while(s[i] != c)
                i++;
            end = i;
            *memory = malloc(end - start + 2);
            if(*memory == NULL)
                return (NULL);
            ft_strlcpy(*memory, s[start], end - start + 2);
            *memory++;
        }
        i++;
    }

}