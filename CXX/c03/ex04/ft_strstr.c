/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:14:29 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/10 10:22:14 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	istr;
	int	itofind;

	istr = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[istr] != '\0')
	{
		itofind = 0;
		while (str[istr + itofind] == to_find[itofind])
		{
			if (to_find[itofind + 1] == '\0')
				return (&str[istr]);
			itofind++;
		}
		istr++;
	}
	return (0);
}
