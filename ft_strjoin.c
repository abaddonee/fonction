/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:58:48 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/04 20:31:10 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		h;
	char	*result;

	j = 0;
	i = 0;
	h = 0;
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)+ 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
		result[j++] = s1[i++];
	while (s2[h] != '\0')
		result[j++] = s2[h++];
	result[j] = '\0';
	return (result);
}
