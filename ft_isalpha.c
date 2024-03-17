/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:01:12 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 14:25:25 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main ()
{
	unsigned char	ch;
	ch = 2;
	int	result = ft_isalpha(ch);
	printf("%d", result);
}*/
