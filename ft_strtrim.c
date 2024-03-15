#include <unistd.h>
#include <stdio.h>
#

static int isset(char a, char const *set)
{
    while(*set)
    {
        if(*set++ == a)
            return (1); 
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *start = s1; 
	char *end = s1 + ft_strlen(s1) - 1; 
	int trimmedlen; 
	char *trimmedstring;

    while (start && isset(*start, set))
	{
    	start++;
	}
	while(start < end && isset(end, set))
	{
		end--;
	}
	trimmedlen = end - start + 1;
	trimmedstring = (char *)malloc(sizeof(char) * trimmedlen + 1);
	if(!trimmedstring)
		return (NULL);
	ft_strlcpy(trimmedstring, start, trimmedlen + 1);
	trimmedstring[trimmedlen] = '\0';
	return(trimmedstring);
} 
