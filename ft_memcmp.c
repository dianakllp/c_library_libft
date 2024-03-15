#include <unistd.h>
#include <stdio.h>

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    unsigned char *pointer1 = ptr1;
    unsigned char *pointer2 = ptr2;

    while(num)
    {
        if(*pointer1 != *pointer2)
        {
            return (*pointer1 - *pointer2);
        }
        *pointer1++;
        *pointer2++;
        num--;
    }
    return (0);
}

/*int main()
{
	char	str[] = "Hello ";
	char	str1[] = "World!";
	ft_putnbr_fd(ft_memcmp(str, str1, 2), 1);
}*/