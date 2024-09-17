/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:55:18 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 14:44:42 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen (str);
	while (len >= 0)
	{
		if (str[len] == (unsigned char) c)
		{
			return ((char *)str + len);
		}
		len--;
	}
	return (0);
}

//searches for the last occurance of a character in a string
