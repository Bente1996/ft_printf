/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:01:37 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/29 14:04:48 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	handle_pointer(void *p)
{
	va_list args;
	size_t	count;

	count = 0;
	if (p == NULL)
	{
		ft_putstr("(nil)");
		count += 5;
	}
		else
	{
		ft_putaddress(p);
		count += 2;
		count += ft_hexalen((uintptr_t)p);
	}
	return (count);
}
