/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:48:42 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/06 14:14:01 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_test_whitespaces(char c)
{
	if ((c != '\t') && (c != '\v') && (c != ' '))
	{
		if ((c != '\f') && (c != '\n') && (c != '\r'))
			return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	count;
	int	negative;

	i = 0;
	result = 0;
	count = 0;
	negative = 1;
	while (str[i] != '\0')
	{
		if (ft_test_whitespaces(str[i]) != 1)
		{
			if (str[i] == '-')
				count++;
			if (count % 2 == 1)
				negative = -1;
			else
				negative = 1;
			if ((str[i] >= '0') && (str[i] <= '9'))
				result = result * 10 + (str[i] - 48);
		}
		i++;
	}
	return (result * negative);
}
