/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:37:26 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/06 14:40:41 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_line_letters(int indx, int x)
{
	if ((indx == 1) || (indx == x))
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	ft_put_center_letters(int indx, int x)
{
	if (indx == 1 || indx == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	indx;
	int	indy;

	indx = 1;
	indy = 1;
	while ((indy <= y) && (x >= 1) && (y >= 1))
	{
		indx = 1;
		while (indx <= x)
		{
			if ((indy == 1) || (indy == y))
				ft_put_line_letters(indx, x);
			else if (indy != 1 && indy != y)
				ft_put_center_letters(indx, x);
			indx++;
		}
		ft_putchar('\n');
		indy++;
	}
}
