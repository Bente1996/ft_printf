/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:02:21 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/21 17:43:19 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *print, ...)
{
	va_list args;
	va_start (args, print); // points out the first of the variable arguments
	                        // args is a va_list variable
							// print is last named argument before variable arguments
	size_t	i;
	char	c;
	char	*s;
	void	*p;
	int	n;
	unsigned int	un;
	unsigned int	x;
	unsigned int	xx;
	

	i = 0;
	while (print[i] != '\0') // or *print to dereference and print++ to increment through characters
	{
		if (print[i] == '%')
		{
			i++;
			if (print[i] == 'c')
			{
				c = (char)va_arg(args, int); //promote to int but cast back to char
				ft_putchar(c);
			}								// va_arg to move to next variable argument
											//stop alles behalve %c in functie
			else if (print[i] == 's')
			{
				s = va_arg(args, char *);
				ft_putstr(s);
			}
			else if (print[i] == 'p')
			{
				p = va_arg(args, void *);
				ft_putadress(p);
			}
			else if ((print[i] == 'd') && (print[i] == 'i'))
			{
				n = va_arg(args, int);
				ft_putnbr_signed(n);
			}
			else if (print[i] == 'u')
			{
				un = va_arg(args, unsigned int);
				ft_putnbr_unsigned(un);
			}
			else if (print[i] == 'x')
			{
				x = va_arg(args, unsigned int);
				ft_puthexa_low(x);
			}
			else if (print[i] == 'X')
			{
				xx = va_arg(args, unsigned int);
				ft_puthexa_up(xx);
			}
			else if (print[i] == '%')
				write(1, &print[i], 1);
		}
		else
		while (print[i] != '\0')
			i++;
		write(1, &print, i); //function to print directly
	}
	va_end(print);
	return ();
	}

// int	main(void)
// {
// 	const char [50] = "%d \n", ft_isalpha(h);
// 	ft_printf("Hello %s, number is %d\n", "World", 42); //test
// 	ft_printf();
// 	return (0);
// }