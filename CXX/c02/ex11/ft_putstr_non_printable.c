/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:16:24 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/09 09:14:09 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_atoh(unsigned char c)
{
	int	d;
	int	u;

	d = c / 16;
	u = c % 16;
	write(1, "\\", 1);
	if (d < 10)
		ft_putchar('0' + d);
	else if (d <= 16)
		ft_putchar('a' + d - 10);
	if (u < 10)
		ft_putchar('0' + u);
	else if (u <= 16)
		ft_putchar('a' + u - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 127))
			ft_putchar(str[i]);
		else
			ft_putchar_atoh(str[i]);
		i++;
	}
}
