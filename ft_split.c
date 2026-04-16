/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:07:34 by abrandao          #+#    #+#             */
/*   Updated: 2026/04/16 12:58:57 by abrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**res;
	int	i;
	int	j;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * count + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != 0)
			i++;
		while



int	count_words(char const *s, char	c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}
