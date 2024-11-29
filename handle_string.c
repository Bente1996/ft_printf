/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:18:28 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/29 14:40:54 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	handle_string(char *s)
{
	va_list args;
	size_t	count;

	count = 0;
	s = va_arg(args, char *);
	if (s == NULL)
	{
		ft_putstr("(null)");
		count += 6;
	}
		else 
	{	
		ft_putstr(s);
		count += ft_strlen(s);
	}
	return (count);
}
