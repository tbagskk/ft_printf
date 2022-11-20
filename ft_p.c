/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:11:11 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/19 21:11:13 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_plen(unsigned long long x)
{
	int	i;

	i = 0;
	while (x)
	{
		i++;
		x = x / 16;
	}
	return (i);
}

int	ft_p(unsigned long long a)
{
	int		i;
	char	tab[16];
	int		size;

	i = 0;
	if (a == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	while (a)
	{
		tab[i] = "0123456789abcdef"[a % 16];
		a = a / 16;
		i++;
	}
	write(1, "0x", 2);
	size = i;
	i--;
	while (i + 1)
		write(1, &tab[i--], 1);
	return (size + 2);
}
