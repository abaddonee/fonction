/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:58:48 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/03 22:04:59 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		h;
	char	*result;
	int		len_s1;
	int		len_s2;

	j = 0;
	i = 0;
	h = 0;
	len_s1 = 0;
	while (s1[len_s1] != '\0')
		len_s1++;
	len_s2 = 0;
	while (s2[len_s2] != '\0')
		len_s2++;
	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	while (s2[h] != '\0')
	{
		result[j] = s2[h];
		j++;
		h++;
	}
	result[j] = '\0';
	return (result);
}
