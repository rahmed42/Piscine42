/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:56:30 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/03 12:52:06 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_asciinb(char nb)
{
	int	d;
	int	u;

	d = nb / 10 + 48;
	u = nb % 10 + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_asciinb(a);
			write(1, " ", 1);
			ft_asciinb(b);
			if ((a != 98) || (b != 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
