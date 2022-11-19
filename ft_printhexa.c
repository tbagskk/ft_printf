/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:35:15 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/19 15:35:16 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_hexlen(unsigned int a)
{
	int	i ;

	i = 0;
	while (a != 0)
	{
		i++;
		a = a / 16;
	}
	return (i);
}

int	ft_printhexa(unsigned int a, char b)
{
	char	*hexa;
	int		tab[100];
	int		size;
	int		i;

	size = a;
	if (b == 'x')
		hexa = "0123456789abcdef";
	if (b == 'X')
		hexa = "0123456789ABCDEF";
	i = 0;
	while (a >= 16)
	{
		tab[i] = hexa[a % 16];
		a = a / 16;
		i++;
	}
	tab[i] = hexa[a];
	while (i >= 0)
	{
		ft_putchar(tab[i]);
		i--;
	}
	return (ft_hexlen(size));
}
