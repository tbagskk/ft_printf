/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:56:01 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/19 14:56:02 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrsize(int a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		a = -a;
		i++;
	}
	while (a != 0)
	{
		i++;
		a = a / 10;
	}
	return (i);
}

int	ft_putnbr(int nb, int *err)
{
	if (nb == -2147483648)
	{
		ft_putchaar('-', err);
		ft_putchaar('2', err);
		ft_putnbr(147483648, err);
	}
	else if (nb < 0)
	{
		ft_putchaar('-', err);
		ft_putnbr(-nb, err);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, err);
		ft_putnbr(nb % 10, err);
	}
	else
	{
		ft_putchaar(nb + '0', err);
	}
	return (ft_nbrsize(nb));
}
