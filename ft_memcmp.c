/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:37:57 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 16:14:04 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;

	pointer2 = (unsigned char *) ptr2;
	pointer1 = (unsigned char *) ptr1;
	while (num)
	{
		if (*pointer1 != *pointer2)
		{
			return (*pointer1 - *pointer2);
		}
		pointer1++;
		pointer2++;
		num--;
	}
	return (0);
}

