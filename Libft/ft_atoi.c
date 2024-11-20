/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:19:28 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/20 14:11:52 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

//FUNCTION: characters to integer
int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	int				nptr2;

	i = 0;
	sign = 1;
	nptr2 = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '\f') || (nptr[i] == '\n') \
	|| (nptr[i] == '\r') || (nptr[i] == '\t') || (nptr[i] == '\v'))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		nptr2 = (nptr[i] - 48) + (10 * nptr2);
		i++;
	}
	return (nptr2 * sign);
}

// int main(void)
// {
//     char nptr[50] = "   +---+4567890";
//
//     printf("%d \n", ft_atoi(nptr));
//     return(0);
// }