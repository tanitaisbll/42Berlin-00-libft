/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:51 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 17:10:47 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1byte;
	const unsigned char	*s2byte;

	i = 0;
	s1byte = s1;
	s2byte = s2;
	while (i < n)
	{
		if (s1byte[i] != s2byte[i])
			return (s1byte[i] - s2byte[i]);
		i++;
	}
	return (0);
}
