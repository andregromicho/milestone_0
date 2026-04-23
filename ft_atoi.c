/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrandao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:16:35 by abrandao          #+#    #+#             */
/*   Updated: 2026/04/23 12:46:10 by abrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	value;
	int	sign;

	value = 0;
	i = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		value = value * 10 + (s[i] - '0');
		i++;
	}
	return (value * sign);
}

/*int	main(void)
{
	printf("%i\n", ft_atoi("123"));
	printf("%i\n", ft_atoi("    -123"));
	printf("%i\n", ft_atoi(""));
}*/
