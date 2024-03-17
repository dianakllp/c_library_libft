/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:39:26 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 15:08:35 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char a, char const *set)
{
	while (*set)
	{
		if (*set++ == a)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	int		trimmedlen;
	char	*trimmedstring;

	end = s1 + ft_strlen(s1) - 1;
	start = s1;
	while (start && isset(*start, set))
	{
		start++;
	}
	while (start < end && isset(end, set))
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
