#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    char *ptr = (char *)s; 

    if(!c)
    {
        return (ptr);
    }
    while (*ptr)
    {
        if(*ptr == c)
        {
            return (ptr);
        }
        ptr++;
    }
    return (NULL);
}

int main()
{char test[] = "mazen is studying @warsaw";
   char *mention =  ft_strchr(test,'\0');
   printf("%s",mention);
}
