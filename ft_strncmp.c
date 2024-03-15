#include <unistd.h>
#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;
    i = 0;

    while(str1[i] != '\0' && str2[i] != '\0' && i <= n)
    {
        if(str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (0);
}

int main()
{
    char string1[] = "hello san";
    char string2[] = "hello sun";
    int n = 9;
    int result = ft_strncmp(string1, string2, n);
    printf("%d", result);
}