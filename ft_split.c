/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:50:21 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 15:10:08 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_sub(char const *string, char character)
{
	int	substrings;

	substrings = 0;
	while (*string)
	{
		if (*string != character)
		{
			substrings++;
			while (*string != character)
				string++;
		}
		string++;
	}
	return (substrings);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	char	**memory;

	memory = ft_calloc(num_of_sub(s, c), sizeof(char *));
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c)
				i++;
			end = i;
			*memory = malloc(end - start + 2);
			if (*memory == NULL)
				return (NULL);
			ft_strlcpy(*memory, s[start], end - start + 2);
			*memory++;
		}
		i++;
	}
}
