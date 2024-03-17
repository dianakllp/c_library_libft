/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:49:44 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 16:17:59 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int character, size_t n)
{
	unsigned char	*string;
	size_t			i;

	string = (unsigned char *) str;
	i = 0;
	while (*string != '\0' && i <= n)
	{
		if (*string == character)
		{
			return ((void *) string);
		}
		string++;
	}
	return (NULL);
}
