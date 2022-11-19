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

int	ft_printhexa(unsigned int a)
{
	char	*hexa;
	int		tab[100];
	int		i;

	hexa = "0123456789abcdef";
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
	return (i);
}
