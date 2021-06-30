/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 21:48:40 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/15 15:50:07 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	compare;
	int	i;

	compare = 0;
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	if (s1[i] != s2[i])
		compare = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (compare);
}

void	ft_printstr(int argc, char *argv[], int j)
{
	j = 1;
	while ((argv[j] != '\0') && (j < argc))
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 1;
	while (i < argc - 1)
	{
		while (j < argc - i - 1)
		{
			while (ft_strcmp (argv[j], "") == 0)
				j++;
			if ((ft_strcmp(argv[j], argv[j + 1])) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		j = 1;
		i++;
	}
	ft_printstr(argc, argv, j);
	return (0);
}
