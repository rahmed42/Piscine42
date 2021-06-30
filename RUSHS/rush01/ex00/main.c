/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <hadufer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:58:01 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/13 22:16:11 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	**tab_init(int size)
{
	int	i;
	int	j;
	int	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int *) * size);
	while (i < size)
	{
		tab[i] = malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

int	print_tab(int **tab, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(tab[i][j] + '0');
			if (j != (n - 1))
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	**v_tab;
	int	**tab;

	if (argc != 2)
		ft_putstr("Error\n");
	else
	{
		tab = tab_init(4);
		v_tab = ft_split_numbers(argv[1], TAB_SIZE);
		if (v_tab == NULL)
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (solver(0, 0, tab, v_tab))
			print_tab(tab, 4);
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
}
