/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:02:21 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/28 18:36:33 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_printf.h"
#include <stdint.h>
#include <aio.h>

int ft_printf(const char *print, ...)
{
	va_list args;
	va_start(args, print); // points out the first of the variable arguments
	                        // args is a va_list variable
							// print is last named argument before variable arguments
	size_t	i;
	char	c;
	char	*s;
	void	*p;
	int	n;
	unsigned int	u;
	unsigned int	x;
	unsigned int	xx;
	size_t	count;

	i = 0;
	count = 0;
	while (print[i] != '\0') // or *print to dereference and print++ to increment through characters
	{
		if (print[i] == '%')
		{
			i++;
			if (print[i] == 'c')
			{
				c = (char)va_arg(args, int); //promote to int but cast back to char
				ft_putchar(c);
				count++;
			}								// va_arg to move to next variable argument
											//stop alles behalve %c in functie
			else if (print[i] == 's')
			{
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
			}
			else if (print[i] == 'p')
			{
				p = va_arg(args, void *);
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
			}
			else if ((print[i] == 'd') || (print[i] == 'i'))
			{
				n = va_arg(args, int);
				ft_putnbr_signed(n);
				if (n == 0)
					count += 1;
				else 
					count += ft_lencheck((long)n);
			}
			else if (print[i] == 'u')
			{
				u = va_arg(args, unsigned int);
				ft_putnbr_unsigned(u);
				if (u == 0)
					count += 1;
				else 
					count += ft_lencheck((long)u);
			}
			else if (print[i] == 'x')
			{
				x = va_arg(args, unsigned int);
				ft_puthexa_low(x);
				if (x == 0)
					count += 1;
				else 
					count += ft_hexalen(x);
			}
			else if (print[i] == 'X')
			{
				xx = va_arg(args, unsigned int);
				ft_puthexa_up(xx);
				if (xx == 0)
					count += 1;
				else 
					count += ft_hexalen(xx);
			}
			else if (print[i] == '%')
			{
				write(1, &print[i], 1);
				count++;
			}
		}
		else
		{
			write(1, &print[i], 1); //function to print directly
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
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