/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <hadufer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:34:25 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/13 21:40:20 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

enum e_indices {istr, itbl, jtbl};

void	reset_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
}

int	ft_isspace(char c)
{
	if (c != '\t' && c != '\n' && c != '\v')
	{
		if (c != '\f' && c != '\r' && c != ' ')
			return (0);
	}
	return (1);
}

int	**ft_split_numbers(char *str, int n)
{
	int	**tbl;
	int	ind[3];

	reset_tab(ind, 3);
	tbl = malloc(n * sizeof (int *));
	while ((str[ind[istr]]) && (ind[jtbl] < n))
	{
		tbl[ind[jtbl]] = malloc(n * sizeof (int *));
		while (str[ind[istr]] && (ind[itbl] < n))
		{
			if ((str[ind[istr]] >= '1') && (str[ind[istr]] <= 48 + n))
				tbl[ind[jtbl]][ind[itbl]++] = str[ind[istr]++] - 48;
			else if (ft_isspace(str[ind[istr]]) != 1)
				return (NULL);
			while (ft_isspace(str[ind[istr]]) == 1)
				ind[istr]++;
		}
		if (++ind[jtbl] < n)
			ind[itbl] = 0;
	}
	if ((ind[jtbl] == n) && (ind[itbl] == n) && str[ind[istr]] == '\0')
		return (tbl);
	else
		return (NULL);
}
