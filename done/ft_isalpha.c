/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:29:16 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/04 11:31:57 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //needed for printf in test main

int ft_isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z'))
		return(1);
	else
		return(0);
}

//function that checks if int c is a letter

int main()
{
    char test_char = '5';
    int result = ft_isalpha(test_char);
    printf("ft_isalpha('%c') = %d\n", test_char, result);

    return 0;
}

