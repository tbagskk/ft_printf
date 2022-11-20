/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:55:53 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/20 17:42:22 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putchaar(char str, int *err)
{	
	int	nb;

	nb = 0;
	if (*err != -1)
		nb = write(1, &str, 1);
	if (nb == -1)
		*err = -1;
	return (nb);
}
