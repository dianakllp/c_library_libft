/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:41:21 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 14:47:55 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*int	main()
{
	char string[] = "Mazen";
	ft_bzero(string + 2, 2);
	printf("%s", string);
}*/
