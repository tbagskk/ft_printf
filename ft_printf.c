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

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

const	char	ft_symbol(va_list arg, const char *variable)
{
	int a;
	
	if (*variable == 'd')
		a += ft_putnbr(va_arg(arg, int));


	return (0);
}


int	ft_printf(const char *variable, ...)
{
	va_list	pam;
	int		size;

	size = 0;
	va_start(pam, variable);
	while (*variable)
	{
		if (*variable == '%')
		{
			ft_symbol(pam, variable + 1);
		}
		variable++;
	}
	va_end(pam);
	return (0);
}

int main()
{

	char g = 'G';
	ft_printf("%d",g);
}