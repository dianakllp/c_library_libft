/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:52:57 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 17:44:07 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*int	main ()
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
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
