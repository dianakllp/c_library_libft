/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:40:37 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 13:01:34 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c >= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main()
{
	unsigned char ascii;
	char n;
	
	ascii = 122; 
	n = 300;
	int	result = ft_isascii(ascii);
	int     result1 = ft_isascii(n);

	printf("%d", result);
	printf("%d", result1);
}*/
