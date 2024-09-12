/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:32 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 13:49:03 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num_elements, size_t size_elements)
{
	size_t array_size;
	void *ptr;

	array_size = num_elements * size_elements;
	ptr = malloc(array_size);
	if(ptr == NULL)
		return(NULL);
	if(ptr != NULL)
		memset(ptr, 0, array_size);
	return(ptr);
}

