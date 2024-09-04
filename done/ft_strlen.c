/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:40:15 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/04 11:49:25 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
	int count;

	count = 0;
	while(s[count] != 0)
	{
		count++;
	}
	return(count);
}

int main()
{
    struct TestCase
    {
        char input[100]; // Input string
        int expected;    // Expected result
    };

    struct TestCase testCases[] = {
        {"", 0},
        {"Hello, World!", 13},
        {"1234567890", 10},
        {"\n\t\r\v\f", 5},
        {"\0", 0},
        {"Testing\tnewline\n", 16},
    };

    int numTests = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTests; i++)
    {
        int result = ft_strlen(testCases[i].input);
        if (result == testCases[i].expected)
        {
            printf("Test %d PASSED\n", i + 1);
        }
        else
        {
            printf("Test %d FAILED\n", i + 1);
            printf("  Input:    \"%s\"\n", testCases[i].input);
            printf("  Expected: %d\n", testCases[i].expected);
            printf("  Got:      %d\n", result);
        }
    }

    return 0;
}
