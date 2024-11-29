/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:02:21 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/29 14:23:52 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_printf.h"
#include <stdint.h>
#include <aio.h>

int	ft_printf(const char *print, ...)
{
	va_list	args;
	size_t	i;
	size_t	count;

	va_start(args, print); //declare va_start variable: va_list variable + last named argument before variable argumsents
	i = 0;
	count = 0;
	while (print[i] != '\0')
	{
		if ((print[i] == '%') && (print[i + 1] != '\0'))
		{
			i++; //move to possible flag, don't print %
			count += handle_print(print[i], args); // result of handle_print at possible flag += count
		}
		else
			count += write(1, &print[i], 1); // no %? print directly, count++;
		i++; //move to next character
	}
	va_end(args); //ends list and cleans things up
	return (count);
}

size_t	handle_print(char is_flag, va_list args) //keeps track of count and puts on output, takes a char and va _list argument
{
	if (is_flag == 'c')
		return (handle_char(va_arg(args, char))); //function handles c and returns count
	else if (is_flag == 's')
		return (handle_string(va_arg(args, char *))); //function handles s and returns count
	else if (is_flag == 'p')
		return (handle_pointer(va_arg(args, void *))); //function handles p and returns count
	else if ((is_flag == 'd') || (is_flag == 'i'))
		return (handle_signed(va_arg(args, int))); //function handles d and i and returs count
	else if (is_flag == 'u')
		return (handle_unsigned(va_arg(args, unsigned int))); //function handles u and returns count
	else if (is_flag == 'x')
		return (handle_hexa_low(va_arg(args, unsigned int))); //function handles x and returns count
	else if (is_flag == 'X')
		return (handle_hexa_up(va_arg(args, unsigned int))); //function handles X and returns count
	else if (is_flag == '%')
		return (write(1, '%', 1)); //write handles % and returns 1
	return (0); //no flag after %? return 0, QUESTION: does '%@' needs to be printed?
}

size_t	ft_hexalen(uintptr_t x)
{
	size_t	len;

	len = 0;
	while (x > 0)
	{
		x /= 16;
		len++;
	}
	return (len);
}
