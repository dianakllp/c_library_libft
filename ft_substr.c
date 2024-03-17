/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:36:07 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 14:36:11 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			i;
	size_t		len_of_sub;
	char		*substring;

	i = 0;
	len_of_sub = 0;
	while (s[len_of_sub] != '\0' && len_of_sub < len)
	{
		len_of_sub++;
	}
	substring = (char *)malloc((len_of_sub + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (i < len_of_sub)
	{
		substring[i] = s[start + 1];
	}
	substring[i] = '\0';
	return (substring);
}
