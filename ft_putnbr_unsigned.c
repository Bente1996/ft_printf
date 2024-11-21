/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:58:56 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/21 17:20:00 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_unsigned(int un)
{
	if (un >= 10)
		ft_putnbr_unsigned(un / 10);
	ft_putchar((un % 10) + '0');
}

int	main(void)
{
	return (0);
}