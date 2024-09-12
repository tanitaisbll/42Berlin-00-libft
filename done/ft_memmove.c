/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:59 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 13:49:45 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *destbytes;
	const unsigned char *srcbytes;

	i = 0;
	destbytes = dest;
	srcbytes = src;
	if(destbytes > srcbytes)
		while(n-- > 0)
			destbytes[n] = srcbytes[n];
	else
	{
		while(i < n)
		{
			destbytes[i] = srcbytes[i];
			i++;
		}
	}
	return(destbytes);
}


