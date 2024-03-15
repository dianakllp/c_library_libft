#include <unistd.h>
#include <stdio.h>

/* Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *mem_for_new_str; //for memory 
    size_t i; //for string 
    size_t length; //for counting string length 

   length = ft_strlen(s); 
   i = 0; 
   if (!s)
	   return (ft_strdup("")); 
   mem_for_new_str = malloc(length + 1 * sizeof(char));
   if (!mem_for_new_str)
   {
    return (NULL); 
   }
   while(i < length) 
  {
    mem_for_new_str[i] = (*f)(i, s[i]);
    i++; 
   }
   mem_for_new_str[i] = '\0';
   return(mem_for_new_str);
}
