/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:42:20 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 15:26:01 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

//iterated through string and applys any function on each character
//void (*f)(unsigned int, char*) is a functionpointer to a function.
	//Accepts the following arguments:
		//the index of the character in the string
		//a pointer to the character in the string
