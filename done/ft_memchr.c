/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:46 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 17:10:27 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*srcbytes;
	unsigned char		uc;

	i = 0;
	srcbytes = src;
	uc = c;
	while (i < n)
	{
		if (srcbytes[i] == uc)
			return ((void *) &srcbytes[i]);
		i++;
	}
	return (0);
}
