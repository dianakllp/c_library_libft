/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:39:45 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 14:39:47 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	unsigned char *ptr1;
	unsigned char *ptr2; 

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	i = 0;
	while ((ptr1[i] != '\0' && ptr2[i] != '\0') && i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/*int main()
{
    char string1[] = "hello san";
    char string2[] = "hello sun";
    int n = 9;
    int result = ft_strncmp(string1, string2, n);
    printf("%d", result);
}*/
