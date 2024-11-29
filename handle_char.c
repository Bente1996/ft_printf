/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:13:27 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/29 14:16:03 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

size_t	handle_char(char c)
{
	va_list args;
	size_t	count;

	count = 0;
	c = (char)va_arg(args, int);
	ft_putchar(c);
	count++;
	return (count);
}
