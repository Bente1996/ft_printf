/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:06:09 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/21 17:21:52 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_up(unsigned int xx)
{
	if (xx >= 16)
		ft_puthexa_up(xx / 16);
	ft_putchar("0123456789ABCDEf"[xx % 16]);
}

int	main(void)
{
	return (0);
}