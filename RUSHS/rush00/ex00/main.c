/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:48:42 by rahmed            #+#    #+#             */
/*   Updated: 2021/06/06 14:13:19 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
int		ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	(void)argc;
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
