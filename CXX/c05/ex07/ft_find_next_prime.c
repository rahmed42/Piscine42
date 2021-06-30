/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:13:48 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/14 20:17:01 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	int		prime;

	i = 1;
	prime = 0;
	if (nb <= 1)
		return (0);
	if (((nb % 2 == 0) && (nb != 2)) || ((nb % 3 == 0) && (nb != 3)))
		return (0);
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			prime++;
		if (prime >= 2)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (ft_is_prime(nb + i) == 0)
		i++;
	return (nb + i);
}
