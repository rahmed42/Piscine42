/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:30:34 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/09 17:41:49 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
