/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 10:32:45 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/14 11:10:51 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	respower;

	respower = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		respower = nb * ft_recursive_power(nb, power - 1);
	return (respower);
}
