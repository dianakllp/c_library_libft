/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:50:38 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 14:50:39 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mem_for_new_str;
	size_t	i;
	size_t	length;

	length = ft_strlen(s);
	i = 0;
	if (!s)
		return (ft_strdup(""));
	mem_for_new_str = malloc(length + 1 * sizeof(char));
	if (!mem_for_new_str)
	{
		return (NULL);
	}
	while (i < length)
	{
		mem_for_new_str[i] = (*f)(i, s[i]);
		i++;
	}
	mem_for_new_str[i] = '\0';
	return (mem_for_new_str);
}
