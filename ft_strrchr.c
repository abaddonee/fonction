/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:25:10 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/03 22:26:29 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*lastc;
	char		ch;
	int			i;

	i = 0;
	ch = (char)c;
	lastc = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			lastc = &s[i];
		}
		i++;
	}
	if (ch == '\0')
	{
		return ((char *)(s + i));
	}
	return ((char *)lastc);
}
