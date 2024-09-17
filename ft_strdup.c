/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:55:04 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 12:58:34 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * (len));
	if (!dest)
		return (0);
	ft_memcpy(dest, str, len);
	return (dest);
}
