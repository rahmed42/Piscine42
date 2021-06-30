/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <hadufer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:15:13 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/13 21:49:59 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

// A finir
int	check_row_right(int val, int i, int **tab, int **v_tab)
{
	int	num;
	int	comp;
	int	tmp;
	int	count;

	num = v_tab[3][i];
	tmp = 0;
	count = 0;
	comp = TAB_SIZE - 1;
	while (comp >= 0)
	{
		if (val == tab[i][comp])
			return (0);
		if ((tab[i][comp] != 0 && tmp != 0) && (tab[i][comp] > tmp))
			break ;
		else if (tab[i][comp] != 0)
			count++;
		tmp = tab[i][comp];
		comp--;
	}
	if ((count <= num))
		return (1);
	else
		return (0);
}

int	check_row_left(int val, int i, int **tab, int **v_tab)
{
	int	num;
	int	comp;
	int	tmp;
	int	count;

	num = v_tab[2][i];
	tmp = 0;
	count = 0;
	comp = 0;
	while (comp <= (TAB_SIZE - 1))
	{
		if (val == tab[i][comp])
			return (0);
		if ((tab[i][comp] != 0 && tmp != 0) && (tab[i][comp] < tmp))
			break ;
		else if (tab[i][comp] != 0)
			count++;
		tmp = tab[i][comp];
		comp++;
	}
	if ((count <= num))
		return (1);
	else
		return (0);
}

int	check_col_down(int val, int j, int **tab, int **v_tab)
{
	int	num;
	int	comp;
	int	tmp;
	int	count;

	num = v_tab[1][j];
	tmp = 0;
	count = 0;
	comp = TAB_SIZE - 1;
	while (comp >= 0)
	{
		if (val == tab[comp][j])
			return (0);
		if ((tab[comp][j] != 0 && tmp != 0) && (tab[comp][j] > tmp))
			break ;
		else if (tab[comp][j] != 0)
			count++;
		tmp = tab[comp][j];
		comp--;
	}
	if ((count <= num))
		return (1);
	else
		return (0);
}

int	check_col_up(int val, int j, int **tab, int **v_tab)
{
	int	num;
	int	comp;
	int	tmp;
	int	count;

	num = v_tab[0][j];
	tmp = 0;
	count = 0;
	comp = 0;
	while (comp <= TAB_SIZE - 1)
	{
		if (val == tab[comp][j])
			return (0);
		if ((tab[comp][j] != 0 && tmp != 0) && tab[comp][j] < tmp)
			break ;
		else if (tab[comp][j] != 0)
			count++;
		tmp = tab[comp][j];
		comp++;
	}
	if (count <= num)
		return (1);
	else
		return (0);
}
