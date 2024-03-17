/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:36:48 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 15:12:07 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	while (*nptr)
	{
		if (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		{
			*nptr++;
		}
		if (*nptr == '+' || *nptr == '-')
		{
			if (*nptr == '-')
			{
				sign *= -1;
			}
			nptr++;
		}
		while (*nptr >= '0' && *nptr <= '9')
		{
			result = result * 10 + (*nptr - '0');
			nptr++;
		}
	}
	return (result * sign);
}

/*int main()
{
	char str1[] = "15613";
	char str2[] = "-15613";
	char str3[] = "+15asd613";
	char str4[] = "-1561dase3";
	ft_putnbr_fd(ft_atoi(str1), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str2), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str3), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str4), 1);
	ft_putchar_fd('\n', 1);
}*/
