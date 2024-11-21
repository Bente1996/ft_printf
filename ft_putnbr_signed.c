/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_signed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:15:57 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/21 17:20:09 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_signed(int n)
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

int	main(void)
{
	return (0);
}