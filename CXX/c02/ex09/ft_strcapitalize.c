/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:31:44 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/07 10:51:38 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	indword[2];

	indword[0] = 0;
	indword[1] = 0;
	while (str[indword[0]] != '\0')
	{
		if ((str[indword[0]] >= 'A') && (str[indword[0]] <= 'Z'))
		{
			if (indword[1] != 0)
				str[indword[0]] = str[indword[0]] + 32;
			indword[1] = 1;
		}
		else if ((str[indword[0]] >= '0') && (str[indword[0]] <= '9'))
			indword[1] = 1;
		else if ((str[indword[0]] >= 'a') && (str[indword[0]] <= 'z'))
		{
			if (indword[1] == 0)
				str[indword[0]] = str[indword[0]] - 32;
			indword[1] = 1;
		}
		else
			indword[1] = 0;
		indword[0]++;
	}
	return (str);
}
