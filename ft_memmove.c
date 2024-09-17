/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:59 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 17:15:16 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dstbytes;
	char	*srcbytes;

	i = 0;
	dstbytes = (char *) dst;
	srcbytes = (char *) src;
	if (!dst && !src)
		return (0);
	if (dstbytes > srcbytes)
		while (n-- > 0)
			dstbytes[n] = srcbytes[n];
	else
	{
		while (i < n)
		{
			dstbytes[i] = srcbytes[i];
			i++;
		}
	}
	return (dst);
}
