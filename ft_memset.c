#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memset(void *str, int ch, size_t n)
{
	unsigned char *test = str; // Why do we use str not *str. 
	//This is the same as that we use &str[0] and str[0].
	//The first is the adres and the second one is the character (or string)
	ch = (unsigned char) ch; 
	while(n)
	{
		*test = ch;
		test++;
		n--;
	}
	return (test);
}

int	main()
{
	char string[] = "Hello";
	int test = '+';
	//ft_memset(string, test, 3);
	memset(string, test, 3);
	printf("%s", string);
}
