/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:39:26 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 16:46:46 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	int		trimmedlen;
	char	*trimmedstring;

	end = (char *) s1 + ft_strlen(s1) - 1;
	start = (char *) s1;
	while (start && ft_strchr(set, *start))
	{
		start++;
	}
	while (start < end && ft_strchr(set, *end))
	{
		end--;
	}
	trimmedlen = end - start + 1;
	trimmedstring = (char *)malloc(sizeof(char) * trimmedlen + 1);
	if (!trimmedstring)
		return (NULL);
	ft_strlcpy(trimmedstring, start, trimmedlen + 1);
	trimmedstring[trimmedlen] = '\0';
	return (trimmedstring);
}

/*int main() {
    char const *s1 = "   Hello, World!   ";
    char const *set = " H!";
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Original string: \"%s\"\n", s1);
    printf("Trimmed string: \"%s\"\n", trimmed);

    free(trimmed); // Free the allocated memory
    return 0;
}*/
