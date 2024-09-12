/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:45:16 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 17:45:34 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start_isset(const char *s1, const char *set)
{
	size_t	start;
	size_t	i;

	start = 0;
	while (s1[start] != '\0')
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[start] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		start++;
	}
	return (start);
}

static size_t	ft_end_isset(const char *s1, const char *set)
{
	size_t	end;
	size_t	i;
	char	*temp_str;

	temp_str = (char *)s1;
	end = ft_strlen (temp_str) - 1;
	while (end > 0)
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[end] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	start = ft_start_isset(s1, set);
	end = ft_end_isset(s1, set);
	if (end >= start)
		len = end - start + 1;
	else
		len = 0;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (0);
	ft_memcpy (trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}
