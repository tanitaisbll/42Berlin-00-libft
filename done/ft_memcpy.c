/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:55 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 17:14:52 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstbytes;
	const unsigned char	*srcbytes;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	dstbytes = dst;
	srcbytes = src;
	while (i < n)
	{
		dstbytes[i] = srcbytes[i];
		i++;
	}
	return (dst);
}
