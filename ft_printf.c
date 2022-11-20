/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:35:00 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/19 11:35:01 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_symbol(va_list arg, const char *variable, int *err)
{
	int	a;

	a = 0;
	if (*variable == 'd' || *variable == 'i')
		a += ft_putnbr(va_arg(arg, int), err);
	else if (*variable == 's')
		a += ft_putstr(va_arg(arg, char *), err);
	else if (*variable == 'x')
		a += ft_printhexa(va_arg(arg, unsigned int), 'x', err);
	else if (*variable == 'X')
		a += ft_printhexa(va_arg(arg, unsigned int), 'X', err);
	else if (*variable == 'c')
		a += ft_putchaar(va_arg(arg, int), err);
	else if (*variable == 'p')
		a += ft_p(va_arg(arg, unsigned long long), err);
	else if (*variable == 'u')
		a += ft_u(va_arg(arg, int), err);
	else if (*variable == '%')
		a += ft_putchaar('%', err);
	return (a);
}

int	ft_printf(const char *variable, ...)
{
	va_list	pam;
	int		size;
	int		err;

	err = 0;
	if (!variable)
		return (-1);
	size = 0;
	va_start(pam, variable);
	while (*variable)
	{
		if (*variable == '%')
			size += ft_symbol(pam, variable++ + 1, &err);
		else
			size += ft_putchaar(*variable, &err);
		variable++;
	}
	va_end(pam);
	if (err == -1)
		return (-1);
	return (size);
}
