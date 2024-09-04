/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:29:50 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/04 11:33:21 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return(0);
}

//function that checks if int c is a number

int main()
{
    char test_char = '@';
    int result = ft_isdigit(test_char);
    printf("ft_isdigit('%c') = %d\n", test_char, result);

    return 0;
}
