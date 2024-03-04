/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:03:00 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/03 21:07:05 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		ch;
	size_t				i;

	p = s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == ch)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
