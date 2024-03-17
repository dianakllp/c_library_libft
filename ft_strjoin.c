/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:38:46 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 16:56:16 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	string1_len;
	size_t	string2_len;
	char	*dest;

	string2_len = ft_strlen(s2);
	string1_len = ft_strlen(s1);
	dest = (char *) malloc (string1_len + string2_len + 1);
	if (!dest)
	{
		return (0);
	}
	ft_memcpy(dest, s1, string1_len);
	ft_memcpy(dest + string1_len, s2, string2_len + 1);
	return(dest);
}
