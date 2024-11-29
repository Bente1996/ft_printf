/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_signed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:05:14 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/29 14:37:29 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	handle_signed(int n)
{
	va_list args;
	size_t	count;

	count = 0;
	n = va_arg(args, int);
	ft_putnbr_signed(n);
	if (n == 0)
	count += 1;
	else 
		count += ft_lencheck((long)n);
	return (count);
}

void	ft_putnbr_signed(int n)
{
	long	n2;

	n2 = (long)n;
	if (n2 < 0)
	{
		ft_putchar('-');
		n2 *= -1;
	}
	if (n2 >= 10)
		ft_putnbr_signed(n2 / 10);
	ft_putchar((n2 % 10) + '0');
}
