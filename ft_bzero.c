#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char *ptr = str; 
	while(n)
	{
		*ptr = 0;
		ptr++;
		n--;  
	}
}

int	main()
{
	char string[] = "Mazen";
	ft_bzero(string + 2, 2);
	printf("%s", string);
}
