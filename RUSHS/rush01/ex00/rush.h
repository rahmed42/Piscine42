/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadufer <hadufer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:03:07 by hadufer           #+#    #+#             */
/*   Updated: 2021/06/13 19:21:57 by hadufer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# define RUSH_H
# define TAB_SIZE 4

int			check_row_right(int val, int i, int **tab, int **v_tab);
int			check_row_left(int val, int i, int **tab, int **v_tab);
int			check_col_down(int val, int j, int **tab, int **v_tab);
int			check_col_up(int val, int j, int **tab, int **v_tab);
int			solver(int i, int j, int **tab, int **v_tab);
int			ft_isspace(char c);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			**ft_split_numbers(char *str, int n);
int			print_tab(int **tab, int n);

#endif
