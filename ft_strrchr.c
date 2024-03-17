/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:50:51 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 15:03:30 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	char	*founded_char;

	founded_char = 0;
	if (character == '\0')
	{
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == character)
		{
			founded_char = (char *)str;
		}
		str++;
	}
	return (founded_char);
}

/*int main()
{
    char string[] = "Hello from P0land";
    int ch = '0';
    char *result = ft_strrchr(string, ch);
    printf("%s", result);
}*/
