/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:06:05 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/28 16:14:32 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_low(unsigned int x)
{
	if (x >= 16) //If the number has more than one digit in hexadecimal, divide it by 16 to isolate and process the more significant digits first.
		ft_puthexa_low(x / 16); //make room for numbers, break into pieces
	ft_putchar("0123456789abcdef"[x % 16]); //every division leftover gets printed according to hexadecimal base
}

//hoi