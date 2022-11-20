/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:37:07 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/19 14:37:08 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *placeholder, ...);
int		ft_printhexa(unsigned int a, char b, int *err);
int		ft_symbol(va_list arg, const char *variable, int *err);
int		ft_putchar(char c);
int		ft_putnbr(int nb, int *err);
int		ft_putstr(char *str, int *err);
int		ft_p(unsigned long long a, int *err);
int		ft_u(unsigned int a, int *err);
int		ft_putchaar(char str, int *err);

#endif
