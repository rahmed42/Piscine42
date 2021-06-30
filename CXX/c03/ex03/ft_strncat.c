/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:04:16 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/09 19:10:48 by rahmed           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				lendest;

	i = 0;
	lendest = ft_strlen(dest);
	while ((src[i] != '\0') && (i < nb))
	{
		dest[lendest + i] = src [i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (dest);
}
