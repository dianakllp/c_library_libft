/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:49:23 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/04 11:45:52 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int	main()
{
	const char *string = "string Hello";
	int result = ft_strlen(string);
	printf("%d", result);
}
