/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hexa_low.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:17:07 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/29 14:37:45 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	handle_hexa_low(unsigned int x)
{
	va_list args;
	size_t	count;

	count = 0;
	x = va_arg(args, unsigned int);
	ft_puthexa_low(x);
	if (x == 0)
	count += 1;
	else 
		count += ft_hexalen(x);
	return (count);
}

void	ft_puthexa_low(unsigned int x)
{
	if (x >= 16)
		ft_puthexa_low(x / 16);
	ft_putchar("0123456789abcdef"[x % 16]);
}
