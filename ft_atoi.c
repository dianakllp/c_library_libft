#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
    int sign = 1; 
    int result; 
    while(*nptr)
    {
        if(*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
        {
            *nptr++;
        }
        if(*nptr =='+' || *nptr == '-')
        {
            if(*nptr == '-')
            {
                sign *= -1; 
            }
            nptr++; 
        }
        while (*nptr >= '0' && *nptr <= '9')
        {
            result = result * 10 + (*nptr - '0');
            nptr++; 
        }
    }
    return (result * sign);
}

/*int main()
{
	char str1[] = "15613";
	char str2[] = "-15613";
	char str3[] = "+15asd613";
	char str4[] = "-1561dase3";
	ft_putnbr_fd(ft_atoi(str1), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str2), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str3), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str4), 1);
	ft_putchar_fd('\n', 1);
}*/