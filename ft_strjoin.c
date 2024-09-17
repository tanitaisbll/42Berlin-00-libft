/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:42:46 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 13:07:37 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;
	char	*temp_s1;
	char	*temp_s2;

	temp_s1 = (char *)s1;
	temp_s2 = (char *)s2;
	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	res = (char *) malloc
		((ft_strlen (temp_s1) +ft_strlen (temp_s2) + 1) * sizeof (char));
	if (!res)
		return (0);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = 0;
	return (res);
}
