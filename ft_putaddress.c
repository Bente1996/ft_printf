/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:03:58 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/28 18:45:09 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "libft.h"

void	ft_puthexa_ptr(uintptr_t x)
{
	if (x >= 16)
		ft_puthexa_ptr(x / 16);
	ft_putchar("0123456789abcdef"[x % 16]);
}

void	ft_putaddress(void *p)
{
	uintptr_t	ptr;

	ptr = (uintptr_t)p;
	ft_putstr("0x");
	ft_puthexa_ptr(ptr);
}

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