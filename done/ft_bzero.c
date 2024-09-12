/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:28 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 13:48:57 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while(i < n)
	{
		p[i] = '\0';
		i++;
	}
}

int main() {
    // Test array
    char test_array[10] = "Hello";

    // Print the array before calling ft_bzero
    printf("Before ft_bzero: ");
    for (int i = 0; i < 10; i++) {
        printf("%c", test_array[i] ? test_array[i] : '0');
    }
    printf("\n");

    // Call ft_bzero to zero out the array
    ft_bzero(test_array, 10);

    // Print the array after calling ft_bzero
    printf("After ft_bzero: ");
    for (int i = 0; i < 10; i++) {
        printf("%c", test_array[i] ? test_array[i] : '0');
    }
    printf("\n");

    return 0;
}
