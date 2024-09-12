/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:33:36 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/12 13:49:07 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
		return(1);
	else
		return(0);
}

int main()
{
    char test_char = '!';
    int result = ft_isalnum(test_char);
    printf("ft_isalnum('%c') = %d\n", test_char, result);

    return 0;
}
