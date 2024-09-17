/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:55:08 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 13:09:48 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	destlen;
	size_t	i;

	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(src));
	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && destlen + i < destsize - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

//src gets attached to dest while size of dest is considered
