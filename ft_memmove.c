/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:19:03 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/03 21:21:18 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = len;
	d = (char *)dst;
	s = (const char *)src;
	if (d > s && d < s + len)
	{
		while (i > 0)
		{
			d [i - 1] = s [i - 1];
			i--;
		}
	}
	else
		ft_memcpy (d, s, len);
	return (dst);
}
