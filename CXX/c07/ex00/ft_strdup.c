/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:13:03 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/17 10:05:16 by rahmed           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;
	int		lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	tab = (char *)malloc(sizeof(char *) * (lensrc + 1));
	while (i < lensrc)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int main (void)\
{
	char *str;
	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("pQb5xWx3d8gkaT6G7qnwxllOtOXJHpwsOGeLAn5T6t");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("9ke3QQjHeqkrAILVwSQ1Hdb");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("8");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("rDPchwArLHlZpmPfx4mbXn2Of4sIrRsb5z6PCS8ZCG24TH");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("jgyvnXy3RZmA9tiBBBap1PJo2Uhnp70NkRI");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("Vnlvksovzr7ZNsduzTlrl08itBCxTFZxviTfEVQ7B7fF");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("95HY91O7VCRdI6hkZYsIzVAQ2mrix5nGINl");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("e2CCpKbYUOgcmIsPR8K");
	printf("%s\n", str);
	free(str);
}
*/
