/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:07:34 by abrandao          #+#    #+#             */
/*   Updated: 2026/04/22 15:28:11 by abrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     count_words(char const *s, char c)
{
        int     i;
        int     count;

        count = 0;
        i = 0;
        while (s[i] != 0)
        {
                while (s[i] != 0 && s[i] == c)
                        i++;
                if (s[i] != 0)
                {
                        count++;
                        while (s[i] != 0 && s[i] != c)
                                i++;
                }
        }
        return (count);
}

static int	fill_words(char **res, char *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] == 0)
			break;
		start = i;
		while (s[i] != c && s[i] != 0)
			i++;
		res[j] = ft_substr(s, start, i - start);
		if(!res[j])
			return (j);
		j++;
	}
	res[j] = NULL;
	return (j);
}

static void	free_all(char **res, int i)
{
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	int	words;
	int	check_filled;

	if(!s)
		return (0);
	words = count_words(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (0);
	check_filled = fill_words(res, s, c);
	if (check_filled < words)
		free_all(res, check_filled);
	return (res);
}
