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
#include <stdio.h>

int	ft_ulen(unsigned int x)
{
	int	i;

	i = 0;
	while (x != 0)
	{
		i++;
		x = x / 10;
	}
	return (i);
}

int	ft_u(unsigned int a)
{
	unsigned long	b;
	int				i;
	char			tab[12];
	int				size;

	i = 0;
	size = a;
	while (a)
	{
		tab[i] = ('0' + a % 10);
		a = a / 10;
		i++;
	}
	while (i)
	{
		i--;
		ft_putchar(tab[i]);
	}
	return (ft_ulen(size));
}
