/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:32:37 by tgeiger           #+#    #+#             */
/*   Updated: 2024/09/17 15:49:50 by tgeiger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	word_length(const char *s, char c)
{
	int	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

static void	free_result(char **result, size_t i)
{
	while (i > 0)
	{
		free(result[i - 1]);
		i--;
	}
	free(result);
}

static int	fill_result(char **result, size_t word_count, const char *s, char c)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (i < word_count)
	{
		while (*s != 0 && *s == c)
			s++;
		word_len = word_length(s, c);
		result[i] = ft_substr(s, 0, word_len);
		if (!result[i])
		{
			free_result(result, i);
			return (0);
		}
		s += word_len;
		i++;
	}
	result[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;

	if (!s)
		return (0);
	word_count = count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (0);
	if (!fill_result(result, word_count, s, c))
		return (0);
	return (result);
}
