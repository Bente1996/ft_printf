/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:08:50 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/29 14:37:11 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	handle_unsigned(unsigned int u)
{
	va_list args;
	size_t	count;

	count = 0;
	u = va_arg(args, unsigned int);
	ft_putnbr_unsigned(u);
	if (u == 0)
	count += 1;
	else 
		count += ft_lencheck((long)u);
	return (count);
}

void	ft_putnbr_unsigned(unsigned int u)
{
	if (u >= 10)
		ft_putnbr_unsigned(u / 10);
	ft_putchar((u % 10) + '0');
}
