/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:56:12 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/19 14:56:13 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str, int *err)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			ft_putchaar(str[i], err);
			i++;
		}
	}
	else
	{
		*err = write (1, "(null)", 6);
		return (6);
	}
	return (ft_strlen(str));
}
