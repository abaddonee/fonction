/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:55:33 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/05 19:46:35 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_size(long nbr)
{
	size_t	size;

	size = 0;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		size = 1;
	}
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		minus;
	char	*result;
	size_t	numbrs;

	numbrs = ft_size((long)n);
	nbr = (long)n;
	minus = 0;
	result = malloc((numbrs + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		result[0] = '-';
		minus = 1;
	}
	result[numbrs] = '\0';
	while (numbrs > (size_t)minus)
	{
		result[numbrs - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		numbrs--;
	}
	return (result);
}
