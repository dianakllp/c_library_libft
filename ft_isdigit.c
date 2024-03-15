/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:52:57 by dkolopen          #+#    #+#             */
/*   Updated: 2024/02/27 14:05:24 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int isdigit(int c);

int	main ()
{
	unsigned char arg;
	arg = '5';
	unsigned char arg1;
	arg1 = 'l';

	int result = isdigit(arg);
	int result1 = isdigit(arg1);
	printf("%d", result);
	printf("%d", result1);
}

int isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
