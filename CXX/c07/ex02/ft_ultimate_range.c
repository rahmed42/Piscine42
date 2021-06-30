/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:11:01 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/16 14:58:03 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

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

int	ft_ultimate_range(int **range, int min, int max)
{
	if ((max - min) > INT_MAX)
		return (-1);
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
/*
#include <stdio.h>
int main()//int argc, char** argv)
{
//	(void)argc;
	int len = 0;
	int *str;

	len = ft_ultimate_range(&str, -5, 5);//argv[1] - 48, argv[2] - 48);
	int i = 0;
	while (i < len)
	{
		printf("%d\n",str[i]);
		i++;
	}
}
*/
