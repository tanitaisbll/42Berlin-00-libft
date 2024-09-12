/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:51 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 13:49:33 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *s1bytes;
	const unsigned char *s2bytes;
	size_t compare;

	i = 0;
	compare = 0;
	s1bytes = s1;
	s2bytes = s2;
	while (i < n)
	{
		compare = s1bytes[i] - s2bytes[i];
		i++;
	}
	return((int)compare);
}
