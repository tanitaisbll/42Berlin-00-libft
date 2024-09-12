/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:24 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 13:51:36 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int nb;

	i = 0;
	sign = 1;
	nb = 0;
	if(!nptr)
		return(0);
	while(nptr[i] == ' ' || ((nptr[i]) >= '\t' && nptr[i] <= '\r'))
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while(nptr[i] != 0 && nptr[i] <= '9')
	{
		nb = nb *10 + (nptr[i] - 48);
		//- 48, da Zahl 0 in ASCII die Num 48 hat; koennte auch -'0' sein
		i++;
	}
	return (sign * nb);
}
