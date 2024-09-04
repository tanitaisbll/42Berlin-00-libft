/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:50:00 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/04 12:54:23 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	if(!s)
		return (0);
	while(i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return(s);
}

int main()
{
    int myArray[4];
    int c;
    size_t n;

    c = 'a';
    n = sizeof(myArray);

// Initialize myArray
    for (size_t i = 0; i < n / sizeof(int); i++) {
        myArray[i] = 0; // Set each element to a known value (e.g., 0)
    }

    ft_memset(myArray, c, n);

    for (size_t i = 0; i < n / sizeof(int); i++) {
       printf("myArray[%zu] = %c\n", i, myArray[i]);
    }

    printf("\nOriginal memset function:\n");
    memset(myArray, c, n);

    for (size_t i = 0; i < n / sizeof(int); i++) {
        printf("myArray[%zu] = %c\n", i, myArray[i]);
    }

    return 0;
}
