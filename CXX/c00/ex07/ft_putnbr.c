/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:48:17 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/03 17:32:26 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_asciinb(int nb)
{
	int	u;

	u = nb % 10 + 48;
	write(1, &u, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			nb = nb * (-1);
			write(1, "-", 1);
		}
	}
	if ((nb < 10) && (nb >= 0))
		ft_asciinb(nb);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_asciinb(nb);
	}
}
