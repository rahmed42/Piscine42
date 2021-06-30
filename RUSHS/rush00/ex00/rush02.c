/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:10:48 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/06 15:23:58 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_line_letters_1(int indx, int x)
{
	if ((indx == 1) || (indx == x))
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	ft_put_center_letters(int indx, int x)
{
	if (indx == 1 || indx == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	ft_put_line_letters_last(int indx, int x)
{
	if ((indx == 1) || (indx == x))
		ft_putchar('C');
	else
		ft_putchar('B');
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
			if (indy == 1)
				ft_put_line_letters_1(indx, x);
			if (indy == y)
				ft_put_line_letters_last(indx, x);
			else if (indy != 1 && indy != y)
				ft_put_center_letters(indx, x);
			indx++;
		}
		ft_putchar('\n');
		indy++;
	}
}
