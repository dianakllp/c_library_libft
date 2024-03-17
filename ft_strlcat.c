/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:30:14 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 15:01:38 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_lenght;
	size_t	dest_lenght;
	size_t	i;

	i = 0;
	src_lenght = ft_strlen(src);
	dest_lenght = ft_strlen(dst);
	if (size <= src_lenght)
	{
		return (size + src_lenght);
	}
	i = 0;
	while (i < size - dest_lenght - 1 && src[i])
	{
		dst[dest_lenght + i] = src[i];
		i++;
	}
	dst[dest_lenght + i] = '\0';
	return (src_lenght + dest_lenght);
}
