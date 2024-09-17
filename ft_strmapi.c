/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:44:05 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 14:40:39 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	result = ft_strdup(s);
	if (!result)
		return (0);
	while (result[i] != '\0')
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}

// apllies function char (*f)(unsigned int, char) to string
