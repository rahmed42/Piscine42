/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:04:58 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/23 22:18:57 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_sep(char a, char *sep)
{
	int	i;

	i = 0;
	if (!sep)
		return (0);
	while (sep[i])
	{
		if (a == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	j = 0;
	w = 0;
	while (str[i] && str[j])
	{
		i = j;
		while (is_sep(str[i], charset) && str[i])
		{
			if (str[i + 1] == 0)
				w--;
			i++;
		}
		j = i;
		while (!is_sep(str[j], charset) && str[j])
			j++;
		w++;
	}
	return (w);
}

char	**ft_wordalloc(char *str, char *charset)
{
	int		i;
	int		j;
	int		w;
	char	**tabst;

	w = 0;
	i = 0;
	j = 0;
	tabst = malloc(sizeof(char *) * ft_wordcount(str, charset) + 1);
	if (!tabst)
		return (NULL);
	while (str[i] && str[j])
	{
		i = j;
		while (is_sep(str[i], charset) && str[i])
			i++;
		j = i;
		while (!is_sep(str[j], charset) && str[j])
			j++;
		tabst[w] = malloc(sizeof(char) * (j - i) + 1);
		w++;
	}
	tabst[w] = NULL;
	return (tabst);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		j;
	char	**dest;

	k = 0;
	j = 0;
	i = 0;
	if (!str)
		return (NULL);
	dest = ft_wordalloc(str, charset);
	if (!dest)
		return (NULL);
	while (j < ft_wordcount(str, charset))
	{
		k = 0;
		while (is_sep(str[i], charset) && str[i])
			i++;
		while (!is_sep(str[i], charset) && str[i])
			dest[j][k++] = str[i++];
		dest[j][k] = 0;
		j++;
	}
	dest[j] = (NULL);
	return (dest);
}

/* TEST main 
#include <stdio.h>
int main ()
{
	char *str = "12E34------------5678-QWER-TE-ABC-";
	char *set = "E-";
	char **tab;
	
	tab = ft_split(str, set);
	
	int i = 0;

	for (i = 0; tab[i] != NULL; i++)
		printf("MAIN : tab[%d] = %s\n",i, tab[i]); // DEBUG
	free(tab);
}*/
