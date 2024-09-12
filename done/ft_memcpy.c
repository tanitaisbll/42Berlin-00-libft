/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:55 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 13:49:37 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *destbytes;
	const unsigned char *srcbytes;

	i = 0;
	destbytes = (char *)dest;
	srcbytes = (char *)src;
	while(i < n)
	{
		destbytes[i] = srcbytes[i];
		i++;
	}
	return(destbytes);
}


