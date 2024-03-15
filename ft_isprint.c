/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:06:38 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/01 15:14:12 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int isprint(int c)
{
	if(c >= 32 && c <= 126)	
	{
		return 1;
	}
	return 0; 
}

int	main()
{
	int test;
	test = 110;
	int	result = isprint(test);
	printf("%d", result);
}
