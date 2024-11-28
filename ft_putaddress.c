/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:03:58 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/27 15:35:02 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "libft.h"

void	ft_puthexa_ptr(uintptr_t x)
{
	if (x >= 16) //If the number has more than one digit in hexadecimal, divide it by 16 to isolate and process the more significant digits first.
		ft_puthexa_ptr(x / 16); //make room for numbers, break into pieces
	ft_putchar("0123456789abcdef"[x % 16]); //every division leftover gets printed according to hexadecimal base
}

void	ft_putaddress(void *p)
{
	uintptr_t	ptr;

	ptr = (uintptr_t)p;
	ft_putstr("0x");
	ft_puthexa_ptr(ptr);
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		write(1, &s[i], 1);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	// char c;
// 	// char	*p;

// 	// c = '&';
// 	// p = &c;
// 	char p[50] = "\0";
// 	printf("%p \n", p);
// 	ft_putaddress(p);
// 	return (0);
// }