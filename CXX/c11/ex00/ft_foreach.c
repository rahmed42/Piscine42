/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:43:31 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/24 15:42:55 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*----------TEST-----
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	ft_asciinb(int nb)
{
	int	u;

	u = nb % 10 + 48;
	write(1, &u, 1);
write (1, "\0", 1);

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

int main ()
{
	int *tab;
	int nb = 7;
	tab = malloc(sizeof(int) * nb + 1);
	for (int i = 0 ; i < nb; i++)
		tab[i] = i*i;
	ft_foreach(tab, nb, *ft_putnbr);
	free(tab);
}*/
