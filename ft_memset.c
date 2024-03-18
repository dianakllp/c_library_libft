/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:40:14 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 15:01:01 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	*test;

	test = str;
	ch = (unsigned char) ch;
	while (n--)
	{
		*test = ch;
		test++;
	}
	return (test);
}

/*int	main()
{
	char string[] = "Hello";
	int test = '+';
	//ft_memset(string, test, 3);
	memset(string, test, 3);
	printf("%s", string);
}*/
