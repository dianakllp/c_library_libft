/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolopen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:30:14 by dkolopen          #+#    #+#             */
/*   Updated: 2024/03/04 14:45:51 by dkolopen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_lenght;
	size_t dest_lenght;
	size_t i;

	i = 0;
	src_lenght = ft_strlen(src);
	dest_lenght = ft_strlen(dst);

	if(size <= src_lenght) //if (size <= dst_len): This line checks if the size 
	//of the destination buffer is less than or equal to the length of the destination string (dst_len). 
	//If it is, it means there's not enough space to concatenate src to dst safely.
	{
		return (size + src_lenght); //the total length that the concatenated string would have been. 
		//This indicates that truncation has occurred.
	}
	i = 0;
    while (i < size - dest_lenght - 1 && src[i]) //size - dest_lenght - 1 is calculating how much
	// space is left for source lenght 
    {
        dst[dest_lenght + i] = src[i];
        i++;
    }
	dst[dest_lenght + i] = '\0';
    return (src_lenght + dest_lenght); //the function returns the total length of the concatenated string, 
	//which is the sum of the lengths of the source and destination strings 
}
