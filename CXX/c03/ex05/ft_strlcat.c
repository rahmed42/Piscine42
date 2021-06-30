/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:27:48 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/10 16:12:26 by rahmed           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	isrc;
	unsigned int	lendest;
	unsigned int	lensrc;

	isrc = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (!size || lendest > size)
		return (lensrc + size);
	while ((src[isrc] != '\0') && (lendest + isrc < size - 1))
	{
		dest[lendest + isrc] = src [isrc];
		isrc++;
	}
	dest[lendest + isrc] = '\0';
	return (lendest + lensrc);
}
