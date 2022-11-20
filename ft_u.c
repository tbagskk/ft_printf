/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:07:29 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/19 17:07:29 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ulen(unsigned int x)
{
	int	i;

	i = 0;
	if (x == 0)
		return (1);
	while (x != 0)
	{
		i++;
		x = x / 10;
	}
	return (i);
}

int	ft_u(unsigned int a, int *err)
{
	unsigned long	b;
	int				i;
	char			tab[12];
	int				size;

	i = 0;
	size = a;
	if (a == 0)
	{
		ft_putchaar(a + '0', err);
	}
	while (a)
	{
		tab[i] = ('0' + a % 10);
		a = a / 10;
		i++;
	}
	while (i)
	{
		i--;
		ft_putchaar(tab[i], err);
	}
	return (ft_ulen(size));
}
