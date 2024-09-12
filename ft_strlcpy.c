/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:43:12 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 17:43:14 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	char	*temp_src;

	temp_src = (char *)src;
	src_len = ft_strlen(temp_src);
	if (src_len + 1 < dstsize)
		ft_memcpy (dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy (dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}
