/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:37:57 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 14:37:59 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;

	pointer2 = ptr2;
	pointer1 = ptr1;
	while (num)
	{
		if (*pointer1 != *pointer2)
		{
			return (*pointer1 - *pointer2);
		}
		*pointer1++;
		*pointer2++;
		num--;
	}
	return (0);
}
/*int main()
{
	char	str[] = "Hello ";
	char	str1[] = "World!";
	ft_putnbr_fd(ft_memcmp(str, str1, 2), 1);
}*/
