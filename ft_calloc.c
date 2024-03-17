/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <dkolopen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:41:35 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/17 14:47:55 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t num_elements, size_t element_size)
{
	void	*destination;

	destination = (void *) malloc (num_elements * element_size);
	if (!destination)
	{
		return (0);
	}
	ft_bzero(destination, (num_elements * element_size));
	return (destination);
}
