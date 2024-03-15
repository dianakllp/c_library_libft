#include <unistd.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int character)
{
    char *founded_char = 0;
    
    if(character == '\0')
    {
        return ((char *)str);
    }
    while(*str)
    {
        if(*str == character)
        {
            founded_char = (char *)str;
        }
        str++;
    }
    return (founded_char);
}

int main()
{
    char string[] = "Hello from P0land";
    int ch = '0';
    char *result = ft_strrchr(string, ch);
    printf("%s", result);
}