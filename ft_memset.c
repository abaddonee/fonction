/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:21:34 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/03 21:24:34 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_ptr;
	unsigned char	b_value;

	b_ptr = b;
	b_value = (unsigned char)c;
	while (len != '\0')
	{
		*b_ptr++ = b_value;
		len--;
	}
	return (b);
}
