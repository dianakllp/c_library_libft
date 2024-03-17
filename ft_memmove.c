/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:49:58 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 15:09:24 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char		*ptr;
	const char	*source;

	ptr = (char *) dest;
	source = (const char *) src;
	while (!dest && !src)
	{
		return (dest);
	}
	if (dest < src)
	{
		ft_memcpy(dest, src, size);
	}
	while (size--)
	{
		ptr[size] = source[size];
	}
	return (ptr);
}

/*int	main()
{
	char string1[] = "Hello World";
	//char string2[4];
	ft_memmove(string1 + 2, string1, 4);
	printf("%s", string1);
}*/
