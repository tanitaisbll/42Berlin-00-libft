/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:45:56 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 14:52:22 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*temp_s;

	temp_s = (char *)s;
	i = 0;
	if (!s)
		return (0);
	if (start > (unsigned) ft_strlen(temp_s))
		return (ft_strdup(""));
	if (len > ft_strlen(temp_s) - start)
		len = ft_strlen(temp_s) - start;
	str = malloc((len +1) * sizeof(char));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

//creates new string including a substring of s using the given start and len
