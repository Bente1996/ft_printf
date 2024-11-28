/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:20:42 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/28 18:17:03 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// char	s[50] = "";
	// char	*s = NULL;
	// ft_printf("%s tussenstukje %X \n", s, xx);
	// printf(" NULL %s NULL ", (char *)NULL);
	// printf("%s tussenstukje %X \n", s, xx);
	
	// unsigned int xx = 555555555;
	// printf("%d \n", printf("%d", xx));
	// printf("%d \n", ft_printf("%d", xx));
	
	//void	*p = 0;
	//printf(" %p %p ", p, p);

	//int n = 0;
	// printf(" %d ", 0);
	// ft_printf(" %d ", 0);

	ft_printf(" %u ", -1);
	printf(" %u ", -1);
	return (0);
}