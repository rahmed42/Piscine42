/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:37:26 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/17 10:06:28 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tbl;

	tbl = NULL;
	i = min;
	if (min >= max)
		return (tbl);
	tbl = malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		tbl[i - min] = i;
		i++;
	}
	return (tbl);
}
/*
#include <stdio.h>
int main()
{
	int *str;
	str = ft_range(4, 8);
	if (str == NULL)
		printf("pointeur NULL");
	int i = 0;
	while (i < 4)
	{
		printf("tbl[%d] = %d\n",i , str[i]);
		i++;
	}
}
*/
