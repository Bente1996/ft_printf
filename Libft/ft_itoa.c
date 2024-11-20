/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:39:31 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/20 14:12:18 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lencheck(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// FUNCTION: integer to characters
char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	n2;

	if (n == 0)
		return (ft_strdup("0"));
	n2 = (long)n;
	len = lencheck(n2);
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (n2 < 0)
	{
		s[0] = '-';
		n2 *= -1;
	}
	s[len] = '\0';
	while (n2 > 0)
	{
		len--;
		s[len] = (n2 % 10) + 48;
		n2 /= 10;
	}
	return (s);
}

// int main(void)
// {
//     int n = -2147483648;
//     printf("%s \n", ft_itoa(n));
//     return(0);
// }