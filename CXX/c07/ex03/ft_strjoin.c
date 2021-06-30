/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:08:31 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/17 16:25:18 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lendest;

	i = 0;
	lendest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[lendest + i] = src [i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}

int	ft_count(char **str, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (str[i][j] != '\0')
		{
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	return (k);
}

typedef struct s_var
{
	int	itab;
	int	istrs;
	int	kstr;
	int	ksep;
}	t_var;

char	*ft_strjoin(int size, char **strs, char *sep)
{
	t_var	s;
	char	*tab;

	s.itab = 0;
	s.istrs = 0;
	s.kstr = ft_count(strs, size);
	s.ksep = ft_count(&sep, 1);
	if (size == 0)
	{
		tab = (char *)malloc(1);
		*tab = '\0';
		return (tab);
	}
	else
		tab = (char *)malloc(sizeof(char) * \
				(s.kstr + (s.ksep * (size - 1) + 1)));
	while (s.itab < (s.kstr + (s.ksep * (size - 1) + 1)))
		tab[s.itab++] = '\0';
	while (s.istrs < size)
	{
		ft_strcat(tab, strs[s.istrs]);
		if (s.istrs++ < (size - 1))
			ft_strcat(tab, sep);
	}
	return (tab);
}
/*
#include <stdio.h>
int main()
{
	int size = 3;

	char *str[] = {"lol", "pouic", "Youpiiii"};
	char *sep = "1234" ;
	char *ptr = NULL;

	ptr = ft_strjoin(size, str, sep);
	printf("%s",ptr);
	free(ptr);
}
*/
