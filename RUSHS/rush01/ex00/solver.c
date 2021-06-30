/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <hadufer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:00:35 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/13 22:22:26 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h> // debug

int	solver(int i, int j, int **tab, int **v_tab)
{
	int	val;

	val = 1;
	if (i == TAB_SIZE)
		return (1);
	if (j >= TAB_SIZE)
		if (solver(i + 1, 0, tab, v_tab))
			return (1);
	while (val <= 4)
	{
		if (check_col_up(val, j, tab, v_tab)
			&& check_col_down(val, j, tab, v_tab)
			&& check_row_left(val, i, tab, v_tab)
			&& check_row_right(val, i, tab, v_tab))
		{
			tab[i][j] = val;
			if (solver(i, j + 1, tab, v_tab))
				return (1);
		}
		val++;
	}
	tab[i][j] = 0;
	return (0);
}
