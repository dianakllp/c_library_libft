/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:01:12 by dkolopen          #+#    #+#             */
/*   Updated: 2024/02/27 15:00:22 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(int	arg)
{
	if((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int	main ()
{
	unsigned char	ch;
	ch = 2;
	int	result = ft_isalpha(ch);
	printf("%d", result);
}
