/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:54:24 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/04 12:28:12 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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


int main() {
    // Test case 1: A valid positive integer
    const char *str1 = "12345";
    int result1 = ft_atoi(str1);
    printf("Test Case 1: String \"%s\" -> Result: %d\n", str1, result1);
    if (result1 == 12345) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    // Test case 2: A valid negative integer
    const char *str2 = "-6789";
    int result2 = ft_atoi(str2);
    printf("Test Case 2: String \"%s\" -> Result: %d\n", str2, result2);
    if (result2 == -6789) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    // Test case 3: String with leading whitespace
    const char *str3 = "   9876";
    int result3 = ft_atoi(str3);
    printf("Test Case 3: String \"%s\" -> Result: %d\n", str3, result3);
    if (result3 == 9876) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    // Test case 4: String with trailing characters
    const char *str4 = "123abc";
    int result4 = ft_atoi(str4);
    printf("Test Case 4: String \"%s\" -> Result: %d\n", str4, result4);
    if (result4 == 123) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    // Test case 5: Empty string
    const char *str5 = "";
    int result5 = ft_atoi(str5);
    printf("Test Case 5: String \"%s\" -> Result: %d\n", str5, result5);
    if (result5 == 0) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}
