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

char	ft_symbol(va_list arg, const char *variable)
{
	int	a;

	a = 0;
	if (*variable == 'd' || *variable == 'i')
		a += ft_putnbr(va_arg(arg, int));
	else if (*variable == 's')
		a += ft_putstr(va_arg(arg, char *));
	else if (*variable == 'x')
		a += ft_printhexa(va_arg(arg, unsigned int), 'x');
	else if (*variable == 'X')
		a += ft_printhexa(va_arg(arg, unsigned int), 'X');
	else if (*variable == 'c')
		a += ft_putchar(va_arg(arg, int));
	else if (*variable == 'p')
		a += ft_p(va_arg(arg, unsigned long long));
	else if (*variable == 'u')
		a += ft_u(va_arg(arg, int));
	else if (*variable == '%')
		a += ft_putchar('%');
	return (a);
}

int	ft_printf(const char *variable, ...)
{
	va_list	pam;
	int		size;

	if (!variable)
		return (-1);
	size = 0;
	va_start(pam, variable);
	while (*variable)
	{
		if (*variable == '%')
			size += ft_symbol(pam, variable++ + 1);
		else
			size += ft_putchar(*variable);
		variable++;
	}
	va_end(pam);
	return (size);
}
/*
int main(int ac, char **av)
{
	char *g = "caca";
	
	int a = ft_printf(" %s %s %s %s %s", " - ", "", "4", "", g);
	printf("\n");
	int b = printf(" %s %s %s %s %s", " - ", "", "4", "", g);
	printf("\n");
	printf("%d", a);
	printf("\n");
	printf("%d", b);
	printf("\n");
}
*/
