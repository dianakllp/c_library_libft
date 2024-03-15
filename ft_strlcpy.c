/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:55:53 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/04 15:13:18 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
	dest[i] = '\0';
	}
	while (src[i] != '\0') 
	{ 
		i++; 
	}
	return (i);
}

int	main()
{	
	size_t n = 4;
	char string_source[] = "Hello Hello";
	char string_dest[14];
	ft_strlcpy(string_dest, string_source, n);
	printf("%s", string_dest);
	return 0;
}
