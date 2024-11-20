/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:02:21 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/20 17:53:56 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_printf(const char *print, ...)
{
	va_list args;
	va_start (args, print); // points out the first of the variable arguments
	                        // args is a va_list variable
							// print is last named argument before variable arguments
	size_t	i;
	char	c;
	char	*s;
	void	*ptr;
	int	n;
	int	in;
	unsigned int	u;
	unsigned int	x;
	unsigned int	xx;
	

	i = 0;
	while (print[i] != '\0') // or *print to dereference and print++ to increment through characters
	{
		if (print[i] == '%')
		{
			i++;
			if (print[i] == 'c')
			char c = (char)va_arg(args, int); //promote to int but cast back to char
			ft_putchar(c);
											// va_arg to move to next variable argument
											//stop alles behalve %c in functie?
			else if (print[i] == 's')
			char	*s = va_arg(args, char *);
			function(s);
			else if (print[i] == 'p')
			void	*ptr = va_arg(args, void *);
			function(ptr);
			else if (print[i] == 'd')
			int	n = va_arg(args, int);
			function
			else if (print[i] == 'i')
			int	in = va_arg(args, int);
			function
			else if (print[i] == 'u')
			unsigned int	u = va_arg(args, unsigned int);
			function
			else if (print[i] == 'x')
			unsigned int	x = va_arg(args, unsigned int);
			function
			else if (print[i] == 'X')
			unsigned int	xx = va_arg(args, unsigned int);
			function
			else if (print[i] == '%')
			function
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