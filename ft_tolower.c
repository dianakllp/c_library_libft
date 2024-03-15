#include <unistd.h>
#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return c;
}

int main()
{
    int	character;
	character = 'F';
	char	result = ft_tolower(character);
	printf("%d", result);
	return 0;
}