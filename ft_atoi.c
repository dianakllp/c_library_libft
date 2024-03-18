/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:36:48 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 20:00:08 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

/*int main()
{
	char str1[] = "\n\n\n  -46\b9 \n5d6";
	int result = ft_atoi(str1);
	printf("%d\n", result);
	//ft_putnbr_fd(atoi(str1), 1);
}*/
