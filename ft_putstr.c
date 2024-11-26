/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:45:49 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/22 18:28:40 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr(char *s) 
{
	size_t i;
	
	i = 0;
	while ((s != NULL) && (s[i] != '\0'))
	{
		write(1, &s[i], 1);
		i++;
	}
}