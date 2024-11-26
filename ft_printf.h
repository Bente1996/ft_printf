/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:22:40 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/26 18:34:15 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//#include <stdio.h>
#include "libft.h"
#include <stdarg.h>

int		ft_printf(const char *, ...);
void	ft_putchar(char	c);
void	ft_putstr(char *s);
void	ft_putnbr_signed(int n);
void	ft_putnbr_unsigned(int un);
void	ft_putaddress(void *p);
void	ft_puthexa_low(unsigned int x);
void	ft_puthexa_up(unsigned int xx);
size_t	ft_hexalen(unsigned x);

#endif